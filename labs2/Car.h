#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    Car();
    Car(const char* brand, const char* plate, int numberOfDoors);
    Car(const Car& other);
    Car(Car&& other) noexcept;

    int getNumberOfDoors() const;
    void setNumberOfDoors(int numberOfDoors);

    void printInfo() const;

    bool operator==(const Car& other) const;

    friend ostream& operator<<(ostream& os, const Car& car);
    friend istream& operator>>(istream& is, Car& car);

    ~Car();
};

#endif // CAR_H
