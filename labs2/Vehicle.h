#ifndef LABS2_VEHICLE_H
#define LABS2_VEHICLE_H

#include <iostream>
#include <cstring>

using namespace std;

class Vehicle {
private:
    char brand[50];
    char plate[20];

public:
    Vehicle();
    Vehicle(const char* brand, const char* plate);
    Vehicle(Vehicle &other);
    Vehicle(Vehicle &&other) noexcept;

    const char* getBrand() const;
    void setBrand(const char* brand);
    const char* getPlateNumber() const;
    void setPlateNumber(const char* plate);

    void printInfo() const;

    friend ostream& operator<<(ostream& os, const Vehicle& vehicle);
    friend istream& operator>>(istream& is, Vehicle& vehicle);

    ~Vehicle();
};


#endif // VEHICLE_H