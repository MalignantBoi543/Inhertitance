// Connor Johnson
// CSC.1202.501
// 11/21/2026

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class Vehicle {
private:
    string manufacturer;
    int yearBuilt;

public:
    
    Vehicle();
    Vehicle(string manufacturer, int yearBuilt);

    
    string getManufacturer() const;
    int getYearBuilt() const;

    
    void setManufacturer(string manufacturer);
    void setYearBuilt(int yearBuilt);

    
    void displayInfo() const;
};

#endif

