#include <iostream>
#include <fstream>
#include <cstring>
#include "User.h"
#include "Vehicle.h"
#include "Parkingticket.h"
#include "Car.h"
#include "Truck.h"
#include "functions.h"
using namespace std;

int main() {
    int choice;
    int option_a;
    int option_b;
    string password = "123456";

    Car* cars[MAX_VEHICLES];
    Truck* trucks[MAX_VEHICLES];
    User* users[MAX_USERS];
    Parkingticket* tickets[MAX_TICKETS];
    int ccount = 0;
    int tcount = 0;
    int ucount = 0;
    int tkcount = 0;

    cout << "Welcome to our parking system!" << endl;
    cout << "Click 1 if you are an administrator, otherwise click 2: ";
    cin >> choice;

    switch(choice) {
        case 1:
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
                    addCar(cars, ccount);
                    break;
                case 2:
                    addTruck(trucks, tcount);
                    break;
                case 3:
                    addUser(users, ucount);
                    break;
                case 4:
               displaySavedInfo();
                    break;
                case 5:
                    cout << "Exiting..." << endl;
                    return 0;
                default:
                    cout << "Invalid option! Please try again." << endl;
            }
        }
        break;

        case 2:
        cout << "You entered the system as a user." << endl;

        while(true) {
            cout << "\n1. Show the registered information:" << endl;
            cout << "2. Register yourself to the system." << endl;
            cout << "3. Take a ticket. " << endl;
            cout << "4. Exit." << endl;
            cout << "Enter your option :";
            int choice2;
            cin >> choice2;

            switch (choice2) {
                case 1:
                    displaySavedInfo();
                    break;
                case 2:
                    addUser(users,ucount);
                    break;
                case 3:
                    addTicket(tickets, tkcount);

                    break;
                case 4:
                    cout << "Exiting..." << endl;
                    return 0;
                default:
                    cout << "Ooops.. You may have chosen a non-existing option:(!" << endl;

            }
        }
            break;
    }
    return 0;
}


