#include <iostream>
#include <cstring>
#include "User.h"
#include "Vehicle.h"
#include "Parkingticket.h"

using namespace std;

int main() {
    Vehicle v("Mercedes", "ABC123");
    Vehicle k = v;
    Parkingticket p(12345, 20240221);
    User u(21, "Sofia");


    cout << "Vehicle brand: " << v.getBrand() << endl;
    cout << "Plate number: " << v.getPlateNumber() << endl;
    cout <<"Brand of vehicle k: " << k.getBrand() << endl;
    cout << "Parking ticket number: " << p.getNumberTicket() << endl;
    cout << "Date: " << p.getDate() << endl;
    cout << "Name: " << u.getName() << endl;
    cout << "User age: " << u.getAge() << endl;

    cout << endl;

    Vehicle h(move(v));
    Parkingticket q(move(p));

    cout << "Original vehicle brand: " << v.getBrand() << endl;
    cout << "Original plate number: " << v.getPlateNumber() << endl;
    cout << "Original parking ticket number: " << p.getNumberTicket() << endl;
    cout << "Original date: " << p.getDate() << endl;

    cout << endl;

    cout << "Moved vehicle brand: " << h.getBrand() << endl;
    cout << "Moved plate number: " << h.getPlateNumber() << endl;
    cout << "Moved parking ticket number: " << q.getNumberTicket() << endl;
    cout << "Moved date: " << q.getDate() << endl;

    cout << endl;

    v.setBrand("BMW");
    v.setPlateNumber("CE0242");
    k.setBrand("AUDI");
    p.setNumberTicket(54621);
    p.setDate(20240322);
    u.setName("Alice");
    u.setAge(19);

    cout << "Updated vehicle brand: " << v.getBrand() << endl;
    cout << "Updated plate number: " << v.getPlateNumber() << endl;
    cout << "Updated brand of vehicle k: " << k.getBrand() << endl;
    cout << "Updated parking ticket number: " << p.getNumberTicket() << endl;
    cout << "Updated date: " << p.getDate() << endl;
    cout << "Updated user name: " << u.getName() << endl;
    cout << "Updated age: " << u.getAge() << endl;
    return 0;
}