#include <iostream>
#include "dijkstra.h"
using namespace std;

int main() {
    cout << "🔰 MultiVehicle Route Optimizer 🔰" << endl;

    string source, destination, vehicle;
    cout << "Enter source city: ";
    cin >> source;
    cout << "Enter destination city: ";
    cin >> destination;
    cout << "Enter vehicle type (car/bike/truck/bus): ";
    cin >> vehicle;

    findOptimalRoute(source, destination, vehicle);
    return 0;
}
