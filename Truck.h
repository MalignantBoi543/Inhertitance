// Connor Johnson
// CSC.1202.501
// 11/21/2026

#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle {
private:
    int towingCapacity;

public:
    // Constructors
    Truck();
    Truck(string manufacturer, int yearBuilt, int towingCapacity);

    // Getter & Setter
    int getTowingCapacity() const;
    void setTowingCapacity(int towingCapacity);

    // Display method
    void displayInfo() const;
};

#endif

