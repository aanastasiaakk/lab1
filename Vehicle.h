#ifndef LABS2_VEHICLE_H
#define LABS2_VEHICLE_H

#include <cstring>

#include <cstring>

class Vehicle {
private:
    char brandcar[50];
    char plate_number[20];

public:
    Vehicle();
    Vehicle(const char* brand, const char* plate);

    const char* getBrand() const;
    void setBrand(const char* brand);

    const char* getPlateNumber() const;
    void setPlateNumber(const char* plate);

    ~Vehicle();
};

#endif // VEHICLE_H
