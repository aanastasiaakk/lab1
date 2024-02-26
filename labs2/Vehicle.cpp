#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle() : Vehicle("-", "-") {}

Vehicle::Vehicle(const char* brand, const char* plate) : brandcar{'\0'}, plate_number{'\0'} {
    strcpy(brandcar, brand);
    strcpy(plate_number, plate);
}

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

Vehicle::~Vehicle() {}

