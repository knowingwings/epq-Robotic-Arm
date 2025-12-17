# 6-DOF Robotic Arm with Custom Strain Wave Gearing

A-Level Extended Project Qualification (EPQ) - Grade: A*

## Project Overview

This project involved the complete design and manufacture of a 6 degree-of-freedom robotic manipulator from first principles. The arm features custom-designed strain wave (harmonic drive) gearing for high torque density and backlash-free motion.

**Key achievements:**
- Custom strain wave gearboxes designed and 3D printed
- Arduino-based motion control
- Iterative mechanical design through multiple prototypes (Mk1 to Mk4)
- Complete CAD modeling in Fusion 360

**Project duration:** Sep 2020- April 2022 (A-Level final year)

## Technical Specifications

### Mechanical Design

**Degrees of Freedom:** 6 (base rotation, shoulder, elbow, wrist pitch, wrist roll, gripper)

**Actuation:** NEMA 17 stepper motors with custom harmonic drive reduction

**Gear Reduction:** ~100:1 through strain wave gearing

**Payload Capacity:** <0.8 kg (designed for light manipulation tasks)

**Materials:**
- PLA (3D printed structural components)
- Aluminum (motor mounts, critical load-bearing parts)
- Steel hardware (fasteners, bearings)

### Harmonic Drive Design

One of the key innovations in this project was the design and manufacture of custom strain wave gearboxes:

**Design features:**
- Wave generator (elliptical input)
- Flexspline (flexible outer gear)
- Circular spline (rigid outer gear)
- ~100:1 reduction ratio
- Zero backlash operation
- Compact form factor

**Iterations:** Multiple design revisions (v1 to v15) to optimize:
- Tooth profile for load capacity
- Flexspline wall thickness for flexibility
- Material selection for durability
- Assembly tolerances

## Repository Structure

```
epq-Robotic-Arm/
├── CAD-files/
│   ├── Harmonic Drive/        # Strain wave gearbox components
│   ├── Mk2+3/                 # Early prototype iterations
│   ├── Mk4/                   # Final design iteration
│   └── Test Components/       # Test pieces and prototypes
│
├── Program_Files/
│   ├── test_Files/            # Motor control tests
│   │   └── Arduino/           # Stepper motor test code
│   └── (main control code)
│
├── Components_Files/          # Bill of materials, component specs
│
├── documentation/
│   ├── EPQ Report draft 2.docx    # Complete project report
│   ├── EPQ Gantt Chart.xlsx       # Project timeline
│   └── EPQ Shopping List.xlsx     # Component sourcing
│
└── Testing_Documentation/     # Test results and validation
```

## Design Process

### Mechanical Evolution

**Mk1-2:** Initial proof-of-concept
- Basic joint design
- Standard spur gearing
- Identified need for higher gear reduction

**Mk3:** Introduction of harmonic drives
- First strain wave gearbox prototype
- Tested tooth profiles
- Refined flexspline flexibility

**Mk4:** Final iteration
- Optimised harmonic drive geometry
- Improved structural rigidity
- Finalised assembly process
- Validated payload capacity

### Control System

**Hardware:**
- Arduino-based microcontroller
- NEMA 17 stepper motors
- A4988 stepper drivers
- Custom PCB for motor driver integration

**Software:**
- Inverse kinematics solver
- Stepper motor control
- Serial communication interface
- Position feedback and calibration

## Key Learnings

This project provided hands-on experience in:

**Mechanical Engineering:**
- Kinematic chain design
- Gear design and tooth profiles
- Load analysis and structural design
- Tolerance analysis for 3D printed assemblies
- Iterative prototyping methodology

**Software Engineering:**
- Real-time motor control
- Arduino programming in C++
- Serial communication protocols

**Systems Integration:**
- Electromechanical system design
- Power distribution
- Motor driver configuration
- Assembly and calibration procedures

## Results

**EPQ Grade:** A* (highest grade)

**Project outcomes:**
- Functional 6-DOF robotic arm
- Successfully demonstrated pick-and-place operations
- Custom gearboxes performed as designed (zero backlash)
- Complete documentation and testing

**Applications demonstrated:**
- 3D printer print removal
- Light object manipulation
- Controlled motion sequences

## Future Improvements

Potential enhancements identified during the project:

**Mechanical:**
- Metal flexsplines for higher load capacity
- Integrated position encoders for closed-loop control
- Improved cable management

**Control:**
- ROS integration for advanced path planning
- Force/torque sensing at end effector
- Computer vision for object recognition

**Software:**
- GUI for easier control
- Trajectory optimization
- Multi-arm coordination

## Files & Documentation

**Key files:**
- `documentation/EPQ Report draft 2.docx` - Complete project write-up
- `CAD-files/Mk4/` - Final design CAD files (Fusion 360)
- `CAD-files/Harmonic Drive/` - Strain wave gearbox designs

**Note:** This was one of my first major engineering projects. The code and documentation reflect my skills at A-Level (age 17-18). For more recent work, see my university projects and current research.

## Skills Demonstrated

- **CAD modeling** (Fusion 360)
- **3D printing** (iterative prototyping)
- **Mechanical design** (kinematics, gearing, structural analysis)
- **Embedded programming** (Arduino, C++)
- **Control systems** (inverse kinematics, motor control)
- **Project management** (timeline planning, documentation)
- **Problem-solving** (design iterations, troubleshooting)

## Progression

This EPQ project was the foundation for my continued work in robotics:
- **BEng Mechatronics** (First Class Honours) - University of Gloucestershire
- **MSc Robotics and Autonomous Systems** - University of Bath (current)
- **Current research:** Multi-robot coordination and distributed control systems

See my [GitHub profile](https://github.com/knowingwings) for current projects including:
- [Distributed Mobile Robots](https://github.com/knowingwings/distributed-mobile-robots) - ROS2 multi-robot platform
- [Decentralized Mobile Manipulator](https://github.com/knowingwings/decentralized-mobile-manipulator) - GPU-accelerated coordination algorithms

## License

This project was completed as part of A-Level coursework. Code and designs provided for educational purposes.

## Author

**Thomas Le Huray**
- Completed: 2023 (A-Level year 13)
- Grade: A* EPQ
- Current: MSc Robotics @ University of Bath

---

*This repository documents my first significant robotics project at age 16-18. While the implementation is early-stage, the project demonstrates fundamental engineering problem-solving and hands-on skills that have continued to develop through my degree programs.*
