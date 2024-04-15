#include "Truck.h"
#include <iostream>

using namespace std;

Truck::Truck() : Vehicle(), loadCapacity(0) {}

Truck::Truck(const char* brand, const char* plate, int loadCapacity)
        : Vehicle(brand, plate), loadCapacity(loadCapacity) {}

Truck::Truck(const Truck& other) : Vehicle(other.getBrand(), other.getPlateNumber()), loadCapacity(other.loadCapacity) {}

Truck::Truck(Truck&& other) noexcept : Vehicle(move(other)), loadCapacity(other.loadCapacity) {}

int Truck::getLoadCapacity() const {
    return loadCapacity;
}

void Truck::setLoadCapacity(int loadCapacity) {
    this->loadCapacity = loadCapacity;
}

void Truck::printInfo() const {
    cout << "Brand: " << getBrand() << ", Plate Number: " << getPlateNumber()
              << ", Load Capacity: " << loadCapacity << " tons" << endl;
}

void Truck::startEngine() const {
    cout << "Truck engine started" << endl;
}

ostream& operator<<(ostream& os, const Truck& truck) {
    os <<  truck.getBrand()  << truck.getPlateNumber() << truck.getLoadCapacity();
    return os;
}

istream& operator>>(istream& is, Truck& truck) {
    char brand[50];
    char plate[20];
    int loadCapacity;
    is >> brand;
    is >> plate;
    is >> loadCapacity;

    truck.setBrand(brand);
    truck.setPlateNumber(plate);
    truck.setLoadCapacity(loadCapacity);

    return is;
}

Truck::~Truck() {}


