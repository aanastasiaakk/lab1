#ifndef LABS2_TRUCK_H
#define LABS2_TRUCK_H

#include "vehicle.h"
#include <iostream>

class Truck final : public Vehicle {
private:
    int loadCapacity;

public:
    Truck();
    Truck(const char* brand, const char* plate, int loadCapacity);
    Truck(const Truck& other);
    Truck(Truck&& other) noexcept;

    int getLoadCapacity() const;
    void setLoadCapacity(int loadCapacity);

    void printInfo() const override;
    void startEngine() const override;

    friend ostream& operator<<(ostream& os, const Truck& truck);
    friend istream& operator>>(istream& is, Truck& truck);

    virtual ~Truck();
};

#endif // TRUCK_H

