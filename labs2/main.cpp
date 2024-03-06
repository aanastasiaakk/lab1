#include <iostream>
#include <cstring>
#include "User.h"
#include "Vehicle.h"
#include "Parkingticket.h"

using namespace std;

int main() {
Vehicle v;
Parkingticket p;
User u;
User s;

v.setBrand("BMW");
v.setPlateNumber("CE0242CO");
p.setDate(06022024);
p.setNumberTicket(123456);
u.setAge(19);
u.setName("Sophia");
s.setName("Angie");
s.setAge(20);

v.printInfo();
p.printInfo();
u.printInfo();
s.printInfo();

cout << endl;

    if (s.getAge() == u.getAge()) {
        cout << "Angie and Sophia are the same age.\n";
    } else {
        cout << "Angie and Sophie are different ages.\n";
    }

cout << endl;

cout << "Number of users in the parking system: " << u.getCount() << endl;


    return 0;
}