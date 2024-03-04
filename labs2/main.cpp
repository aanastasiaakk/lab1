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

    k.printInfo();
    p.printInfo();
    u.printInfo();

    cout << endl;

    Vehicle h(move(v));
    Parkingticket q(move(p));

    cout<<"Moved information:"<<endl;
     h.printInfo();
     q.printInfo();
    cout << endl;

  /*  v.setBrand("BMW");
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
    cout << "Updated age: " << u.getAge() << endl;*/
    cout<<"Number of vehicles created:"<<Vehicle::getCount<<endl;
    return 0;
}