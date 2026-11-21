// Connor Johnson
// CSC.1202.501
// 11/21/2026

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
    string manufacturer;
    int yearBuilt;
    int numDoors;
    int towingCapacity;

    cout << "Vehicle Program\n\n";

    // Test Vehicle class
    cout << "Vehicle:\n";
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cin.ignore(); 

    Vehicle vehicle(manufacturer, yearBuilt);
    vehicle.displayInfo();
    cout << "\n";

    // Test Car class
    cout << "Car:\n";
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cout << "Enter the number of doors: ";
    cin >> numDoors;
    cin.ignore(); 

    Car car(manufacturer, yearBuilt, numDoors);
    car.displayInfo();
    cout << "\n";

    // Test Truck class
    cout << "Truck:\n";
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cout << "Enter the towing capacity: ";
    cin >> towingCapacity;

    Truck truck(manufacturer, yearBuilt, towingCapacity);
    truck.displayInfo();

    return 0;
}
