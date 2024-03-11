#include <iostream>
#include "User.h"
#include "Vehicle.h"
#include "Parkingticket.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main() {
    Vehicle v;
    Parkingticket p;
    User u;
    User s;
    User q;
    Car w;
    Truck o;

    cout<<"Enter information about user q:" << endl;
    cin >> q;

    cout << endl;

    cout << "My car: " << endl;
    cin >> w;

    cout << endl;

    cout << "My truck: " << endl;
    cin >> o;

    cout << endl;
    v.setBrand("BMW");
    v.setPlateNumber("CE0242CO");
    p.setDate(22032024);
    p.setNumberTicket(123456);
    u.setAge(19);
    u.setName("Sophia");
    s.setName("Angie");
    s.setAge(20);

    Vehicle copyVehicle = v;
    Vehicle moveVehicle = move(copyVehicle);

    v.printInfo();
    p.printInfo();
    u.printInfo();
    s.printInfo();
    q.printInfo();
    copyVehicle.printInfo();
    moveVehicle.printInfo();
    w.printInfo();
    o.printInfo();

    cout << endl;

    if (s.getAge() == u.getAge()) {
        cout << "Angie and Sophia are the same age.\n";
    } else {
        cout << "Angie and Sophie are different ages.\n";
    }

    cout << endl;



    return 0;
}