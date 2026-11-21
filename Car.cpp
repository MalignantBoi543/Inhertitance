//Connor Johnson
//CSC.1202.501
//11/21/2026

#include "Car.h"
#include <iostream>

using namespace std;

Car::Car() : Vehicle() {
    numDoors = 0;
}

Car::Car(string manufacturer, int yearBuilt, int numDoors)
    : Vehicle(manufacturer, yearBuilt) {
    this->numDoors = numDoors;
}

int Car::getNumDoors() const {
    return numDoors;
}

void Car::setNumDoors(int numDoors) {
    this->numDoors = numDoors;
}

void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Doors: " << numDoors << "\n";
}
