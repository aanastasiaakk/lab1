#include <iostream>
#include "User.h"
#include "Vehicle.h"
#include "Parkingticket.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main() {
    Vehicle* v = new Car("BMW","CE0242",4);
    v->printInfo();
    Vehicle* t = new Truck("MAN","AT4536CE",22);
    t->printInfo();
    Car car("AUDI","CE2345CV",4);
    Vehicle& carRef = car;
    car.startEngine();
    delete v;
    delete t;


    return 0;
}