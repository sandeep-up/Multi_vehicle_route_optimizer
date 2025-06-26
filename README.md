# MultiVehicle Route Optimizer

**A C++ command-line tool in progress that helps you find the best routes between cities for different vehicles—whether you’re in a car, on a bike, driving a truck, or taking a bus.**

## Overview
This program uses Dijkstra’s algorithm on a modular graph of Indian cities to calculate the fastest or most fuel-efficient route, taking into account:
- Distances between cities
- Vehicle-specific fuel costs and speeds
- Road conditions and constraints

## Features
- Simple text-based input: enter your starting point, destination, and vehicle type
- Core Dijkstra algorithm to find shortest or cheapest paths
- Customizable vehicle cost logic (car, bike, truck, bus)
- Plans to add support for loading real city data and optional stops along the way

## Current Status
- Basic graph structure and Dijkstra integration are working
- In progress: reading graph data from files, handling traffic constraints, refining vehicle models

## File Layout
```
main.cpp       // Program entry and user prompts

dijkstra.h     // Function declarations for route finding

dijkstra.cpp   // Dijkstra implementation
models.h       // Declaration for cost calculations
models.cpp     // Vehicle fuel cost logic
README.md      // This file
```

## Next Steps
- Load graph from external files
- Add midpoint stop functionality
- Write unit tests to verify correctness

## How to Build and Run
1. Compile with a C++17 compiler, for example:
   ```bash
   g++ -std=c++17 main.cpp dijkstra.cpp models.cpp -o route_planner
   ```
2. Run the executable:
   ```bash
   ./route_planner
   ```
3. When prompted, type in:
   - Source city (e.g. Delhi)
   - Destination city (e.g. Mumbai)
   - Vehicle type (car, bike, truck, or bus)

**Example session:**
```
Enter source city: Delhi
Enter destination city: Mumbai
Enter vehicle type: car
Optimal route (car): Delhi -> Jaipur -> Indore -> Mumbai
Total Cost: 9590
```

---

**Author:** Sandeep Upadhyay  
**Contact:** sandeepiitian7575@gmail.com  
**GitHub:** https://github.com/sandeep-up  
**LinkedIn:** https://linkedin.com/in/sandeep-upadhyay

**License:** MIT (see LICENSE file for details)
