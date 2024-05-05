# ECE4180

Project Name: Volumetric Display

Author: Jada Brunson


Project Desciption: The goal of this project was the create a volumetric display. I wanted to make what would appear to be a hologram of a cube. 
I utilized a motor, 3 3.7 volt lithium  batties connected in series, 2 NRF24L01+ Wireless Transceiver Modules, a 8*8 WS2812 led matrix,a custom 3d printed led panel mount, and 2 mbed lpc 1768 devices. The two rf transrecievers communicate with each other to determine when to display the hologram. It essentially acts as it's remote controller. The motor moves at a speed of up to 3000 rpm at 12v, which is controllable by using the other mbed for a motor driver and remote controlling the mbed closely, or using a lower voltage battery. It still pperates at 5 volts with a speed decrease porportional to the amount of voltage lost. 


The CAD:


There are a few different parts of the assembly. First there is the axle coupler which connects the axle of the motor to the assembly of the volumetric display assembly. Inside of the volumetric display assembly, there is a housing for the mbed, the breadboard, and the RF sensor, as well as a housing for the led array. All of the electronics are on the side of the led array that does not have lights and the led array array are coincidence to the axis of rotation of the motor. A nut fits inside of the coupler to tighten the volumetric display to the motor. Design wise, led matrixes consume alot of and it is difficult to keep objects in place that are spinning at such a high rpm. Therefore, the design process was an iterative one.

<img width="229" alt="Screenshot 2024-05-05 at 4 39 58 PM" src="https://github.com/jadabrunson/ECE4180/assets/148473515/5ff1ab89-31e2-47d7-8b3e-9002237f21ef">

<img width="247" alt="Screenshot 2024-05-05 at 4 41 56 PM" src="https://github.com/jadabrunson/ECE4180/assets/148473515/a1bb21b5-1872-44b4-83c8-dd7435f8c4c3">



The Animation:


A Cube Animation was created using blender


https://github.com/jadabrunson/ECE4180/assets/148473515/76acad6f-aad1-456d-987d-5c0b18991cdf


I produced 24 frames then denoised each png file for every frame

<img width="691" alt="Screenshot 2024-05-04 at 2 10 57 PM" src="https://github.com/jadabrunson/ECE4180/assets/148473515/f0d98f6b-39e9-49bf-a5df-689f9930af07">


It was then converted into C code using pixel app

https://github.com/jadabrunson/ECE4180/assets/148473515/671c98a7-9c38-4bdb-9ca4-acf11138791f


Physical Implementation:

I incorported a switch to controll the drainage of the batteries and a voltage regulator for the led matrix. I cut down the protobroad to fit inside a 1*1 inch slot in on the assembly. Then later I added on some hot glue to prevent the possibility of the wires shorting.

<img width="406" alt="Screenshot 2024-05-02 at 8 35 45 AM" src="https://github.com/jadabrunson/ECE4180/assets/148473515/3e23a3bc-ea07-4708-a879-5c09b7b7d17d">

Quick Demo:

At a Distance: https://www.youtube.com/watch?si=Fr5DQOO1MmJqfRbI&v=MRW04NsfVeo&feature=youtu.be

More detail(ignore the mess): https://www.youtube.com/watch?v=sLwHgkXNvYw

The illusion looks better in real life and a little further away, but here is a quick demonstration. Up close and on camera it looks more like streaks of light. In this demo a 9 volt power supply was used for the motor so it is running at roughly 2200 rpm.

https://github.com/jadabrunson/ECE4180/assets/148473515/86bb5062-701c-4b64-8ebe-6beb53e574be

Presentation:



The wiring:

<img width="633" alt="Screenshot 2024-05-05 at 5 46 54 PM" src="https://github.com/jadabrunson/ECE4180/assets/148473515/c6d451ea-2c10-410b-961f-5f4a852b3573">

<img width="629" alt="Screenshot 2024-05-05 at 5 46 34 PM" src="https://github.com/jadabrunson/ECE4180/assets/148473515/66fad716-175e-4d51-9d26-bdad6a1651ec">









