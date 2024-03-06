#ifndef LABS2_VEHICLE_H
#define LABS2_VEHICLE_H

#include <cstring>

#include <cstring>

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

    ~Vehicle();
};


#endif // VEHICLE_H
