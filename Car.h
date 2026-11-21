// Connor Johnson
// CSC.1202.501
// 11/21/2026

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

using namespace std;

class Car : public Vehicle {
private:
    int numDoors;

public:
    // Constructors
    Car();
    Car(string manufacturer, int yearBuilt, int numDoors);

    // Getter & Setter
    int getNumDoors() const;
    void setNumDoors(int numDoors);

    // Display method
    void displayInfo() const;
};

#endif

