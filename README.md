



# About Me + Resume



Hi. I’m Jada Brunson, a fifth-year Computer Engineering student at Georgia Tech, focused on building systems that are efficient, reliable, and grounded in real-world application. My academic and professional experience spans embedded systems, software engineering, data processing, and machine learning. I’m particularly interested in how hardware and software come together to create systems that interact with the world—whether that’s through robotics, distributed services, mobile platforms, or intelligent automation.

At this stage in my education, I’ve worked across a range of platforms and disciplines. My technical foundation is built on coursework and hands-on experience in C++, Python, Java, and embedded C, with exposure to systems like AWS, Docker, Firebase, and various microcontrollers. What drives my work is a focus on integration—getting different layers of a system to communicate efficiently, scaling functionality through modular design, and ensuring robustness under uncertainty.

One of the most defining experiences of my time at Georgia Tech has been my undergraduate research in machine learning and optimization. As part of a team, I contributed to a project focused on model robustness for inverse problems, specifically in the domain of image denoising. Our work involved developing an adversarial training pipeline where one model generated perturbations and another was trained to resist them. We used this iterative training strategy to build a denoiser that could handle input distortions not seen during initial training. The project not only introduced me to adversarial machine learning and neural architecture design, but also reinforced the importance of system resilience—an idea that’s central to many of my interests in networking, robotics, and embedded design. The research culminated in a co-authored IEEE publication and presentation abroad, giving me the opportunity to communicate technical findings in an academic setting.

Beyond research, I’ve applied my skills in real-world engineering environments through internships and team-based development projects. During my time as a Software Test and Automation Intern at Ciena, I created Python-based automation tools to streamline manual testing and improve coverage in network validation pipelines. Working on optical networking systems required both precision and adaptability. I designed integration tests for system-level features, interfaced with SDKs and command-line tools, and maintained automated environments capable of verifying compatibility across evolving product stacks. The experience gave me a deeper appreciation for systems testing—not just as a validation step, but as a critical part of the development lifecycle that informs both performance and design.

My experience in embedded systems comes from both coursework and applied projects. One notable example was the development of a custom RPG game on the Mbed platform. The game featured real-time event handling, dynamic rendering, and a full quest system with NPC interactions. I implemented memory-efficient storage using hash tables and optimized lookup operations to reduce latency during gameplay. Hardware interaction was central to the experience: player inputs were captured via physical controls, and output was managed through an LCD and serial debug tools. I handled everything from collision detection to boss logic, which taught me how to balance complexity, responsiveness, and system constraints on a resource-limited platform.

In a separate embedded systems project, I worked on Melodia—a robotic learning tool that used touch sensors, a display, and a microcontroller to create a responsive user experience. I developed the software architecture in C++/Arduino to handle sensor input, feedback loops, and power management. The project involved debugging across hardware and software layers, integrating real-time data processing with UI responsiveness. This type of work aligns closely with my core interest: designing interactive systems that merge the physical and digital in efficient and meaningful ways.

I’ve also built software at the application layer, particularly in full-stack and mobile development. In a student-led start-up project, I built a cloud-integrated mobile app that incorporated Firebase Authentication, Cloud Storage, and the Google Vision API. I implemented user account management and real-time analytics, built RESTful APIs for backend data handling, and used Stripe for subscription monetization. The project required balancing front-end UI performance with backend reliability and gave me an end-to-end perspective on application development—from system architecture to deployment and testing.

Across all of these experiences, a consistent thread has been a focus on reliability, system integration, and user-centered design. Whether debugging a robotic controller or optimizing a machine learning model, I prioritize clarity, efficiency, and technical rigor. I’m drawn to problems that require careful coordination between components—whether they’re hardware, software, or data pipelines—and I enjoy working in environments where iteration, testing, and improvement are part of the daily workflow.

Looking forward, I’m interested in opportunities where I can continue working on system-level challenges—particularly in areas like cloud infrastructure, embedded applications, and intelligent automation. I’m also exploring how robust machine learning models can be deployed in resource-constrained environments, and how distributed systems can be made more reliable through better architecture and testing. I want to continue building things that function under real-world constraints, scale effectively, and deliver value beyond the technical novelty.

This website is a space for me to document that journey—highlighting the research, projects, and systems I’ve worked on and the technical problems I’ve helped solve. It’s not a complete picture, but it reflects where I’ve invested time and effort and where I hope to grow next. Whether in a research lab, on a product team, or in a startup environment, I aim to bring strong engineering discipline, curiosity, and adaptability to everything I build.


# Career Goals

My primary career goal is to work at the intersection of software systems, embedded platforms, and cloud infrastructure—building tools and technologies that are scalable, reliable, and grounded in real-world application.


# Technical Projects

# APP

Project Name: MadeByMe

Authors: Jada Brunson+ team

Project Description: An app for sharing meals with friends and gameifying the home cooking process


https://drive.google.com/file/d/1iv_xWLRWGm4-7Q8P_mKL4a7Rg7NOj-SG/view?usp=sharing






# Volumetric Display

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


https://github.com/jadabrunson/ECE4180/assets/148473515/813ad307-2dc9-4a01-9525-b4388433d07f


At a Distance: https://www.youtube.com/watch?si=Fr5DQOO1MmJqfRbI&v=MRW04NsfVeo&feature=youtu.be

More detail(ignore the mess): https://www.youtube.com/watch?v=sLwHgkXNvYw

The illusion looks better in real life and a little further away, but here is a quick demonstration. Up close and on camera it looks more like streaks of light. In this demo a 9 volt power supply was used for the motor so it is running at roughly 2200 rpm.


Presentation: 

https://www.youtube.com/watch?v=ZTAor_0RVa0


The wiring:

<img width="633" alt="Screenshot 2024-05-05 at 5 46 54 PM" src="https://github.com/jadabrunson/ECE4180/assets/148473515/c6d451ea-2c10-410b-961f-5f4a852b3573">

<img width="629" alt="Screenshot 2024-05-05 at 5 46 34 PM" src="https://github.com/jadabrunson/ECE4180/assets/148473515/66fad716-175e-4d51-9d26-bdad6a1651ec">


Code(Note):
I imported the NRFL01P and WS2812 libraries for mbed






