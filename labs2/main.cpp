#include <iostream>
#include <fstream>
#include <cstring>
#include "User.h"
#include "Vehicle.h"
#include "Parkingticket.h"
//#include "Car.h"
#include "Truck.h"
#include "functions.h"
using namespace std;


int main() {
    int choice;
    int option_a;
    int option_b;
    string password = "123456";
   // Car* cars[MAX_VEHICLES];
    Truck* trucks[MAX_VEHICLES];
    User* users[MAX_USERS];
    int userCount = 0;
    int carCount = 0;
    int truckCount = 0;
    cout << "Welcome to our parking system!" << endl;
    cout << "Click 1 if you are an administrator, otherwise click something else: ";
    cin >> choice;

    if (choice == 1) {
        do {
            cout << "Enter your password: ";
            cin >> password;
            if (password != "123456")
                cout << "Wrong password! Try again." << endl;
        } while (password != "123456");

        cout << "You entered the system as an administrator." << endl;

        cout << endl;

        while (true) {
            cout << "\nMENU:" << endl;
            cout << "1. Add cars." << endl;
            cout << "2. Add trucks." << endl;
            cout << "3. Add users to the system." << endl;
            cout << "4. Show registered information." << endl;
            cout << "5. Exit." << endl;
            cout << "Enter your option: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    //addCar(cars, carCount);
                    break;
                case 2:
                    addTruck(trucks, truckCount);
                    break;
                case 3:
                    addUser(users, userCount);
                    break;
                case 4:
                    //displayCars(cars, carCount);
                    displayTrucks(trucks, truckCount);
                    displayUsers(users, userCount);
//                    readCar();
                    break;
                case 5:
                    cout << "Exiting..." << endl;
                    return 0;
                default:
                    cout << "Invalid option! Please try again." << endl;
            }
        }
    } else {
        cout << "You entered the system as a user." << endl;
    }
    return 0;
}

