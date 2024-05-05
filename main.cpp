
//rotating cube code
#include "mbed.h"
#include "WS2812.h"
#include "frame_data.h"
#include "nRF24L01P.h"

#define LED_COUNT 64

PinName dinPin = p21;
nRF24L01P my_nrf24l01p(p5, p6, p7, p8, p10, NC); // Adjusted for ce on pin 10, IRQ not connected
WS2812 strip(dinPin, LED_COUNT, 0, 6, 6, 0);

DigitalOut led1(LED1); // Use LED1 to indicate signal reception

int indexMap[LED_COUNT] = {
    0, 1, 2, 3, 4, 5, 6, 7,     // Row 1: left to right
    15, 14, 13, 12, 11, 10, 9, 8, // Row 2: right to left
    16, 17, 18, 19, 20, 21, 22, 23, // Row 3: left to right
    31, 30, 29, 28, 27, 26, 25, 24, // Row 4: right to left
    32, 33, 34, 35, 36, 37, 38, 39, // Row 5: left to right
    47, 46, 45, 44, 43, 42, 41, 40, // Row 6: right to left
    48, 49, 50, 51, 52, 53, 54, 55, // Row 7: left to right
    63, 62, 61, 60, 59, 58, 57, 56  // Row 8: right to left
};

void displayFrame(const uint32_t* frameData) {
    int ledColors[LED_COUNT];
    for (int i = 0; i < LED_COUNT; i++) {
        ledColors[i] = frameData[indexMap[i]];
    }
    strip.write(ledColors);
}

void clearLeds() {
    int clear[LED_COUNT] = {0}; // Array to clear LEDs
    strip.write(clear);
}

int main() {
    printf("Spinning LED initialized. Waiting for signal....\n");
    my_nrf24l01p.powerUp();
    my_nrf24l01p.setRfFrequency(2401);
    my_nrf24l01p.setRxAddress(0xE7E7E7E7E7, 5);
    my_nrf24l01p.setTransferSize(sizeof(int));
    my_nrf24l01p.setReceiveMode();
    my_nrf24l01p.enable();

    bool displayFrames = false;  // Control flag for frame display

    while (true) {
        if (my_nrf24l01p.readable()) {
            int receivedData;
            if (my_nrf24l01p.read(NRF24L01P_PIPE_P0, (char *)&receivedData, sizeof(receivedData)) == sizeof(receivedData)) {
                printf("Signal received: %d\n", receivedData);
                if (receivedData == 1) {
                    displayFrames = true;  // Start displaying frames
                    led1 = 1;
                } else if (receivedData == 0) {
                    displayFrames = false; // Stop displaying frames
                    clearLeds();  // Clear all LEDs
                    led1 = 0;
                }
            }
        }

        if (displayFrames) {
            for (int frame = 0; frame < 24; frame++) {
                displayFrame(frames[frame]);
                ThisThread::sleep_for(10ms);
            }
        } else {
            ThisThread::sleep_for(50ms); // Increase polling interval when not displaying
        }
    }
}
