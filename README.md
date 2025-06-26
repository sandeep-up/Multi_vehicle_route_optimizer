# MultiVehicle Route Optimizer

Work in progress CLI tool in C++ to find optimal routes for multiple vehicles (car, bike, truck, bus) using Dijkstra’s algorithm.

##  Overview
This tool calculates the fastest or most fuel-efficient route based on:
- City-to-city distances
- Vehicle-specific fuel cost models
- Modular graph structure
- Real-world-like constraints

---

## 🔧 Features
- ✅ CLI input for source, destination, and vehicle
- ✅ Dijkstra’s algorithm for shortest path
- ✅ Vehicle-specific cost logic (car/bike/truck/bus)
- ⏳ Loadable graph for real-world simulation
- ⏳ Optional mid-point stops (upcoming)

---

## 🚧 Status
Currently working on:
- Enhancing city graph with external input
- Adding support for traffic constraints
- More accurate vehicle models

---

## 🗂️ File Structure
```
├── main.cpp        # CLI + input handling
├── dijkstra.cpp    # Shortest path logic
├── dijkstra.h      # Dijkstra declaration
├── models.cpp      # Vehicle cost logic
├── models.h        # Vehicle declarations
└── README.md
```

---

## ✅ To Do
- [x] Project setup
- [x] Graph + Dijkstra implementation
- [x] Fuel cost models
- [x] CLI integration
- [ ] File-based graph loading
- [ ] Midpoint handling
- [ ] Unit testing

---

## 🏁 How to Use
### ▶️ Step 1: Compile
Make sure you have a C++17-compatible compiler (like g++), then run:
```bash
g++ -std=c++17 main.cpp dijkstra.cpp models.cpp -o route_planner
```

### ▶️ Step 2: Run the Program
```bash
./route_planner
```

### ▶️ Step 3: Input
You'll be asked for:
- Source city (e.g. `Delhi`)
- Destination city (e.g. `Mumbai`)
- Vehicle type (e.g. `car`, `bike`, `truck`, or `bus`)

### 📦 Example
```
Enter source city: Delhi
Enter destination city: Mumbai
Enter vehicle type: car
Optimal route (car): Delhi Jaipur Indore Mumbai 
Total Cost: 9590
```

---

## 👤 Author
**Sandeep Upadhyay**  
📧 sandeepiitian7575@gmail.com  
🔗 [GitHub](https://github.com/sandeep-up) · [LinkedIn](https://linkedin.com/in/sandeep-upadhyay)

---

## 📄 License
This project is licensed under the MIT License — see the `LICENSE` file for details.

