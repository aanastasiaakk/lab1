#include <iostream>
#include "Car.h"

using namespace std;

Car::Car() : Vehicle(), numberOfDoors(0) {}

Car::Car(const char* brand, const char* plate, int numberOfDoors)
        : Vehicle(brand, plate), numberOfDoors(numberOfDoors) {}

Car::Car(const Car& other) : Vehicle(other.getBrand(), other.getPlateNumber()), numberOfDoors(other.numberOfDoors) {}


Car::Car(Car&& other) noexcept
        : Vehicle(std::move(other)), numberOfDoors(other.numberOfDoors) {
    other.numberOfDoors = 0;
}

int Car::getNumberOfDoors() const {
    return numberOfDoors;
}

void Car::setNumberOfDoors(int numberOfDoors) {
    this->numberOfDoors = numberOfDoors;
}

void Car::printInfo() const {
    cout << "Brand: " << getBrand() << ", Plate Number: " << getPlateNumber()
              << ", Number of Doors: " << numberOfDoors << endl;
}

void Car::startEngine() const {
    cout << "Car engine started" << endl;
}

bool Car::operator==(const Car& other) const {
    return (numberOfDoors == other.numberOfDoors);
}


ostream& operator<<(ostream& os, const Car& car) {
    os  << car.getBrand() << endl << car.getPlateNumber() << endl<< car.getNumberOfDoors();
    return os;
}

istream& operator>>(istream& is, Car& car) {
    char brand[50];
    char plate[20];
    int numberOfDoors;
    is >> brand;
    is >> plate;
    is >> numberOfDoors;

    car.setBrand(brand);
    car.setPlateNumber(plate);
    car.setNumberOfDoors(numberOfDoors);

    return is;
}

Car::~Car() {}
