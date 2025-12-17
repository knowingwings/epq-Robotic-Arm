# 6-DOF Robotic Arm with Custom Strain Wave Gearing

A-Level Extended Project Qualification (EPQ) - Grade: A*

## Project Overview

This project involved the complete design and manufacture of a 6 degree-of-freedom robotic manipulator from first principles. Conducted at Elizabeth College, the arm features custom-designed strain wave (harmonic drive) gearing for high torque density and backlash-free motion.

**Key achievements:**
- Full kinematic chain design with 6 DOF
- Custom strain wave gearboxes designed and 3D printed
- Four major design iterations (Mk1 through Mk4.2) refining the design
- Arduino-based motion control with serial communication
- Complete CAD modelling in Fusion 360
- Comprehensive research into industrial robotic arm design

**Project duration:** September 2020 - April 2022 (500 days actual vs 210 days planned)

**Institution:** Elizabeth College
**Candidate:** Thomas William Le Huray

## Technical Specifications

### Mechanical Design

**Degrees of Freedom:** 6 (base rotation, shoulder, elbow, wrist pitch, wrist roll, gripper)

**Actuation:** NEMA 17 stepper motors (17HS16-2004 and 17HS4401S models)

**Gear Reduction:** ~100:1 through custom strain wave gearing

**Payload Capacity:** <0.8 kg (designed for light manipulation tasks such as 3D printer print removal)

**Materials:**
- PLA (3D printed structural components)
- Recycled aluminium arm pieces (Mk1-Mk3, from scrapped screen soldering machine)
- Custom 3D printed components (Mk4)
- Steel hardware (fasteners, bearings)

### Harmonic Drive Design

One of the key innovations in this project was the design and manufacture of custom strain wave gearboxes inspired by industrial Harmonic Drive SE units:

**Design features:**
- Wave generator (elliptical input)
- Flexspline (flexible outer gear)
- Circular spline (rigid internal gear)
- Modified output design for 3D printing (uses rigid internal gear as output rather than flexspline)
- ~100:1 reduction ratio
- Zero backlash operation
- Compact form factor

**Design inspiration:**
- 3D Printed Life's harmonic drive designs
- Levi Janssen's timing belt-based harmonic drives
- Industrial Vika-350 robotic arm
- Chris Annin's AR4 open-source arm

**Iterations:** Multiple design revisions (v1 to v15) optimising:
- Tooth profile for load capacity
- Flexspline wall thickness for flexibility
- Material selection for durability (PLA)
- Assembly tolerances for 3D printing

## Design Evolution

### Mk1: Initial Proof-of-Concept
- Used recycled metal arm pieces from Offshore Electronics work experience
- Bespoke components for each joint
- Too complex to manufacture with 3D printing
- Identified need for component standardisation

### Mk2: Shared Components
- Increased number of shared components
- Lighter design than Mk1
- First functional harmonic drive prototypes
- Still too heavy for the motors and reducers

### Mk3: Further Weight Reduction
- Further increased shared components
- Improved harmonic drive design
- Isometric sketches preceded CAD work
- Lower axis drives proved too weak to lift the arm
- Metal arm components still too heavy

### Mk4: Complete Redesign (Final Version)
**Mk4.1:**
- Complete redesign from scratch
- All components 3D printed (no recycled metal)
- Initial version too large and cumbersome
- Some parts didn't work as intended

**Mk4.2 (Final):**
- Reduced size by 100mm
- Fixed mechanical issues from Mk4.1
- Well thought-out design incorporating lessons from all previous versions
- Culmination of improved CAD and 3D printing skills

## Control System

### Hardware
- **Microcontroller:** Arduino
- **Motors:** NEMA 17 stepper motors (17HS16-2004, 17HS4401S)
- **Motor Drivers:** A4988 stepper drivers
- **Control Interface:** Raspberry Pi (planned) for remote access via Python

### Software
- **Motor Control:** AccelStepper library for Arduino
- **Language:** C++ (Arduino), Python (Raspberry Pi interface planned)
- **Communication:** Serial communication protocol
  - Commands specify: axis, number of steps, direction
- **Interface:** Python script (via pySerial) for remote control

### Control Architecture
Arduino receives commands via serial input → Interprets axis and step commands → Controls stepper motors via AccelStepper → Enables remote access through Raspberry Pi

## Manufacturing Challenges

### 3D Printing Issues

**Original Printer (PrintRite Colido 2.0 Plus):**
- Stopped functioning correctly during Mk3 testing
- Resulted in failed prints and project delays

**Replacement Printer (Voxelab Aquila X2):**
- Ender 3 clone with additional features
- Successfully printed Axis 4, 5, and 6 of Mk4.1
- Developed heat break clogging issue
- Plastic melted in heat break causing repeated printer failures
- Unable to resolve despite multiple disassembly attempts
- Project pivoted to focus on CAD design refinement due to timeline constraints

## Research Foundation

Comprehensive research into:
- **Industrial Arms:** Vika-350, KUKA KR350
- **Open-Source Projects:** Annin AR4, Faze 4 Robotics Hand
- **Gear Reducers:** Harmonic drives, cycloidal drives, planetary gearboxes
- **Control Systems:** Inverse kinematics, stepper motor control
- **3D Printing:** Gear tooth design, support-free printing techniques

See Works Cited in documentation for complete bibliography.

## Project Management & Timeline

**Original Estimate:** 210 days
**Actual Duration:** 500 days
**Timeline Overrun:** 138%

**Key Learning:** Poor initial planning that didn't account for:
- Examination periods
- Holiday breaks
- General inability to work on project during school term
- Hardware failures (3D printer issues)

**Reflection:** More pessimistic timelines would have been more accurate. Future projects should account for realistic availability and potential setbacks.

## Repository Structure

```
epq-Robotic-Arm/
├── CAD-files/
│   ├── Harmonic Drive/        # Strain wave gearbox components
│   ├── Mk2+3/                 # Early prototype iterations
│   ├── Mk4/                   # Final design iteration (Mk4.1 and Mk4.2)
│   └── Test Components/       # Test pieces and prototypes
│
├── Program_Files/
│   ├── test_Files/            # Motor control tests
│   │   └── Arduino/           # Stepper motor test code (AccelStepper library)
│   └── (main control code)
│
├── Components_Files/          # Bill of materials, component specs
│
├── documentation/
│   ├── EPQ Report draft 2.docx    # Complete project report
│   ├── EPQ Gantt Chart.xlsx       # Project timeline (planned vs actual)
│   └── EPQ Shopping List.xlsx     # Component sourcing
│
└── Testing_Documentation/     # Test results and validation
```

## Results

**EPQ Grade:** A* (highest grade)

**Project Outcomes:**
- Functional 6-DOF robotic arm design (Mk4.2)
- Custom harmonic drive gearboxes that achieved zero backlash
- Complete documentation and testing methodology
- Well-developed CAD skills through iterative design process

**Intended Applications:**
- 3D printer print removal
- Light object manipulation
- Control software experimentation
- Educational demonstration of robotic principles

## Key Learnings

This project provided hands-on experience in:

**Mechanical Engineering:**
- Kinematic chain design
- Custom gear design (strain wave gearing)
- Load analysis and structural design
- Tolerance analysis for 3D printed assemblies
- Iterative prototyping methodology
- Design optimisation through multiple iterations

**Software Engineering:**
- Arduino programming in C++
- Real-time motor control
- Serial communication protocols
- Library integration (AccelStepper)

**Systems Integration:**
- Electromechanical system design
- Power distribution
- Motor driver configuration
- Assembly and calibration procedures

**Project Management:**
- Timeline estimation and planning
- Adapting to setbacks and hardware failures
- Resource management
- Documentation practices

## Skills Demonstrated

- **CAD Modelling:** Fusion 360 (complex assemblies, gear design)
- **3D Printing:** Iterative prototyping, troubleshooting print failures
- **Mechanical Design:** Kinematics, gearing, structural analysis
- **Embedded Programming:** Arduino, C++
- **Control Systems:** Stepper motor control, serial communication
- **Research:** Comprehensive literature review and evaluation
- **Problem-Solving:** Four major design iterations, adapting to constraints
- **Technical Writing:** Comprehensive project report and documentation

## Progression

This EPQ project was the foundation for my continued work in robotics:

**Academic Progression:**
- **2020-2022:** A-Level (Maths, Physics, Computer Science) - Elizabeth College
- **2022-2023:** BEng Mechatronics (First Class Honours) - University of Gloucestershire
- **2024-Present:** MSc Robotics and Autonomous Systems - University of Bath

**Research Development:**
- EPQ: Custom robotic arm with harmonic drives
- BEng: Decentralised control architectures for dual mobile manipulators
- MSc: Multi-robot coordination and distributed control systems

See my [GitHub profile](https://github.com/knowingwings) for current projects including:
- [Distributed Mobile Robots](https://github.com/knowingwings/distributed-mobile-robots) - ROS2 multi-robot coordination platform
- [Decentralised Mobile Manipulator](https://github.com/knowingwings/decentralized-mobile-manipulator) - GPU-accelerated coordination algorithms

## Files & Documentation

**Key Files:**
- `documentation/EPQ Report draft 2.docx` - Complete project report
- `documentation/EPQ Gantt Chart.xlsx` - Timeline (planned vs actual)
- `CAD-files/Mk4/` - Final design CAD files (Fusion 360)
- `CAD-files/Harmonic Drive/` - Strain wave gearbox designs (v1-v15)
- `Program_Files/test_Files/Arduino/` - Motor control test code

**Note:** This was one of my first major engineering projects completed at age 16-18. The code and documentation reflect my skills at A-Level. For more recent work, see my university projects and current research.

## Acknowledgements

- Elizabeth College for supervision and support
- Offshore Electronics for work experience and recycled components (Mk1-Mk3)
- Open-source community for inspiration (Annin Robotics, 3D Printed Life, Levi Janssen)

## Licence

This project was completed as part of A-Level coursework. Code and designs provided for educational purposes.

## Author

**Thomas William Le Huray**
- Completed: April 2022 (A-Level Year 13)
- Grade: A* EPQ
- Institution: Elizabeth College
- Current: MSc Robotics @ University of Bath

---

*This repository documents my first significant robotics project at age 16-18. Whilst the implementation reflects early-stage skills, the project demonstrates fundamental engineering problem-solving, iterative design methodology, and hands-on fabrication capabilities that have continued to develop through my degree programmes.*
