#include "Vehicle.h"
#include <iostream>
#include <cstring>
using namespace std;

Vehicle::Vehicle() : Vehicle("-", "-") {}

Vehicle::Vehicle(Vehicle &other)
{
    strcpy (brandcar, other.brandcar);
    strcpy (plate_number, other.plate_number);
}

Vehicle::Vehicle(Vehicle&& other) noexcept {
    strcpy(brandcar, other.brandcar);
    strcpy(plate_number, other.plate_number);
    strcpy(other.brandcar, "");
    strcpy(other.plate_number, "");
    cout << "Copy constructor was called for vehicle" << endl;
}

int Vehicle::count = 0;

Vehicle::Vehicle(const char* brand, const char* plate) {
    std::strcpy(brandcar, brand);
    std::strcpy(plate_number, plate);
    count++;
}


const char* Vehicle::getBrand() const {
    return brandcar;
}

void Vehicle::setBrand(const char* brand) {
    strcpy(brandcar, brand);
}

const char* Vehicle::getPlateNumber() const {
    return plate_number;
}

void Vehicle::setPlateNumber(const char* plate) {
    strcpy(plate_number, plate);
}

void Vehicle::printInfo() const {
    cout << "Vehicle brand: " << this->getBrand() << endl;
    cout << "Plate number: " << this->getPlateNumber() << endl;
}

int Vehicle::getCount() {
    return count;
}

Vehicle::~Vehicle() {
    count--;
}
