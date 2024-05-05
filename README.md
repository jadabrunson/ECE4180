# ECE4180

Project Name: Volumetric Display

Author: Jada Brunson


Project Desciption: The goal of this project was the create a volumetric display. I wanted to make what would appear to be a hologram of a cube. 
I utilized a motor, 3 3.7 volt lithium  batties connected in series, 2 NRF24L01+ Wireless Transceiver Modules, a 8*8 WS2812 led matrix,a custom 3d printed led panel mount, and 2 mbed lpc 1768 devices. The two rf transrecievers communicate with each other to determine when to display the hologram. It essentially acts as it's remote controller. The motor moves at a speed of up to 3000 rpm at 12v, which is controllable by using the other mbed for a motor driver and remote controlling the mbed closely, or using a lower voltage battery. It still pperates at 5 volts with a speed decrease porportional to the amount of voltage lost. 


I first began the project by designing the 3d print to house the batteries, pcb, mbed, and the led matrix.

<img width="229" alt="Screenshot 2024-05-05 at 4 39 58 PM" src="https://github.com/jadabrunson/ECE4180/assets/148473515/5ff1ab89-31e2-47d7-8b3e-9002237f21ef">


<img width="225" alt="Screenshot 2024-05-05 at 4 41 31 PM" src="https://github.com/jadabrunson/ECE4180/assets/148473515/8f8ac089-3007-4111-b9b0-f5fc09ddc027">



I then animated the cube to display.


A Cube Animation was created using blender


https://github.com/jadabrunson/ECE4180/assets/148473515/76acad6f-aad1-456d-987d-5c0b18991cdf


I produced 24 frames then denoised each png file for every frame

<img width="691" alt="Screenshot 2024-05-04 at 2 10 57 PM" src="https://github.com/jadabrunson/ECE4180/assets/148473515/f0d98f6b-39e9-49bf-a5df-689f9930af07">


It was then converted into C code using pixel app

https://github.com/jadabrunson/ECE4180/assets/148473515/671c98a7-9c38-4bdb-9ca4-acf11138791f

