// Connor Johnson
// CSC.1202.501
// 11/21/2026

#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle() {
    manufacturer = "";
    yearBuilt = 0;
}

Vehicle::Vehicle(string manufacturer, int yearBuilt) {
    this->manufacturer = manufacturer;
    this->yearBuilt = yearBuilt;
}

string Vehicle::getManufacturer() const {
    return manufacturer;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::setManufacturer(string manufacturer) {
    this->manufacturer = manufacturer;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

void Vehicle::displayInfo() const {
    cout << "Vehicle Information:\n";
    cout << "Manufacturer: " << manufacturer << "\n";
    cout << "Year Built: " << yearBuilt << "\n";
}
