#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car final : public Vehicle {
private:
    int numberOfDoors;

public:
    Car();
    Car(const char* brand, const char* plate, int numberOfDoors);
    Car(const Car& other);
    Car(Car&& other) noexcept;

    int getNumberOfDoors() const;
    void setNumberOfDoors(int numberOfDoors);

    void printInfo() const override;
    void startEngine() const override;

    bool operator==(const Car& other) const;

    friend ostream& operator<<(ostream& os, const Car& car);
    friend istream& operator>>(istream& is, Car& car);
  
    virtual ~Car();void addCar(const char* filename);
};


#endif // CAR_H
