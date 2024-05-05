/*
#include "mbed.h"
#include "nRF24L01P.h"

nRF24L01P my_nrf24l01p(p5, p6, p7, p8, p10, NC);  // MOSI, MISO, SCK, CSN, CE, IRQ not connected

const int ledOnSignal = 1;   // Signal to turn on the animation
const int ledOffSignal = 0;  // Signal to turn off the animation

DigitalOut led1(LED1);  // LED1 on the mbed used for status indication
DigitalIn button(p21, PullUp);  // Button connected to pin p21 with internal pull-up resistor

bool lastButtonState = true;  // Initial state of the button is unpressed (high because of pull-up)
bool signalState = false;  // Initial state of the signal, false means off

int main() {
    printf("Press button to toggle signal.\n");

    my_nrf24l01p.powerUp();
    my_nrf24l01p.setRfFrequency(2401);  // Adjust RF frequency
    my_nrf24l01p.setTxAddress(0xE7E7E7E7E7, 5);  // Set TX address
    my_nrf24l01p.setTransferSize(sizeof(int), NRF24L01P_PIPE_P0);

    while (true) {
        bool currentButtonState = button.read();
        if (currentButtonState == false && lastButtonState == true) {  // Check for button press
            signalState = !signalState;  // Toggle signal state on button press
            if (signalState) {
                my_nrf24l01p.write(NRF24L01P_PIPE_P0, (char*)&ledOnSignal, sizeof(ledOnSignal));
                led1 = 1;  // Turn on LED to indicate the signal is active
            } else {
                my_nrf24l01p.write(NRF24L01P_PIPE_P0, (char*)&ledOffSignal, sizeof(ledOffSignal));
                led1 = 0;  // Turn off LED to indicate the signal is inactive
            }
        }
        lastButtonState = currentButtonState;  // Update last button state

        ThisThread::sleep_for(10ms); // Debounce delay and poll interval
    }
}
*/