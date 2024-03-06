#include "Vehicle.h"
#include <iostream>
#include <cstring>
using namespace std;

Vehicle::Vehicle() {
    strcpy(brand, "");
    strcpy(plate, "");
}

Vehicle::Vehicle(const char* brand, const char* plate) {
    strcpy(this->brand, brand);
    strcpy(this->plate, plate);
}

Vehicle::Vehicle(Vehicle& other) {
    strcpy(brand, other.brand);
    strcpy(plate, other.plate);
}

Vehicle::Vehicle(Vehicle&& other) noexcept {
    strcpy(brand, move(other.brand));
    strcpy(plate, move(other.plate));
    strcpy(other.brand, "");
    strcpy(other.plate, "");
}


const char* Vehicle::getBrand() const {
    return brand;
}

void Vehicle::setBrand(const char* brand) {
    strcpy(this->brand, brand);
}

const char* Vehicle::getPlateNumber() const {
    return plate;
}

void Vehicle::setPlateNumber(const char* plate) {
    strcpy(this->plate, plate);
}

void Vehicle::printInfo() const {
    cout << "Brand: " << brand << ", Plate: " << plate << std::endl;
}

ostream& operator<<(ostream& os, const Vehicle& vehicle) {
    os << "Brand: " << vehicle.brand << ", Plate: " << vehicle.plate;
    return os;
}

istream& operator>>(istream& is, Vehicle& vehicle) {
    is >> vehicle.brand >> vehicle.plate;
    return is;
}

Vehicle::~Vehicle() {}
