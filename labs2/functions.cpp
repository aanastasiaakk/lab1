//
// Created by Nastya on 08/04/2024.
//

#include "functions.h"
#include <iostream>
#include <fstream>

void addTruck(Truck* trucks[], int& tcount) {
    if (tcount >= MAX_VEHICLES) {
        throw
                runtime_error("Cannot add more trucks. Maximum limit reached.");
    }
    char brand[50];
    char plate[20];
    int numberOfDoors;
    int loadCapacity;
    cout << "Enter brand: ";
    cin >> brand;
    cout << "Enter plate number: ";
    cin >> plate;
    cout << "Enter number of doors: ";
    cin >> numberOfDoors;
    cout << "Enter load capacity: ";
    cin >> loadCapacity;
    cin.ignore();
    trucks[tcount++] = new Truck(brand, plate, numberOfDoors);
    cout << "Truck added successfully!" << endl;

    ofstream outFile("truck_info.txt", ios::app);
    if (outFile.is_open()) {
        outFile << "Brand: " << brand << ", Plate: " << plate << ", Doors: " << numberOfDoors << ", Load Capacity: " << loadCapacity << endl;
        outFile.close();
    } else {
        cout << "Error: Unable to open file for writing." << endl;
    }

    cout << "Truck added successfully!" << endl;
}

void addCar(Car* cars[], int& ccount) {
    if (ccount >= MAX_VEHICLES) {
        throw
                runtime_error("Cannot add more cars. Maximum limit reached.");
    }
    char brand[50];
    char plate[20];
    int numberOfDoors;
    cout << "Enter brand: ";
    cin >> brand;
    cout << "Enter plate number: ";
    cin >> plate;
    cout << "Enter number of doors: ";
    cin >> numberOfDoors;
    cin.ignore();
    cars[ccount++] = new Car(brand, plate, numberOfDoors);
    cout << "Car added successfully!" << endl;
    ofstream outFile("car_info.txt", ios::app);
    if (outFile.is_open()) {
        outFile << "Brand: " << brand << ", Plate: " << plate << ", Doors: " << numberOfDoors << endl;
        outFile.close();
    } else {
        throw
                runtime_error("Error: Unable to open file for writing. ");
    }

    cout << "Car added successfully!" << endl;
}

void addUser(User* users[], int& ucount) {
    if (ucount >= MAX_USERS) {
        throw
                runtime_error("Cannot add more users. Maximum limit reached.");
    }
    int age;
    char name[50];
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    users[ucount++] = new User(age, name);
    cout << "User added successfully!" << endl;

    ofstream outFile("user_info.txt", ios::app);
    if (outFile.is_open()) {
        outFile << "Name: " << name << ", Age: " << age << endl;
        outFile.close();
    } else {
        throw
                runtime_error("Error: Unable to open file for writing. ");
    }

    cout << "User added successfully!" << endl;
}
void addTicket(Parkingticket* tickets[], int& tkcount) {
    if (tkcount >= MAX_TICKETS) {
        throw
                runtime_error("Cannot add more tickets. Maximum limit reached.");
    }
    int number_ticket;
    int date;
    cout << "Enter number of the ticket: ";
    cin >> number_ticket;
    cout << "Enter today's date: ";
    cin >> date;
    tickets[tkcount++] = new Parkingticket(number_ticket, date);
    cout << "Ticket added successfully!" << endl;

    ofstream outFile("tickets_info.txt", ios::app);
    if (outFile.is_open()) {
        outFile << "Number: " << number_ticket << ", Date: " << date << endl;
        outFile.close();
    } else {
        throw
                runtime_error("Error: Unable to open file for writing. ");
    }
    cout << "Ticket added successfully!" << endl;
}

void displaySavedInfo() {
    string line;

    ifstream truckFile("truck_info.txt");
    if (truckFile.is_open()) {
        cout << "Saved Truck Information:" << endl;
        while (getline(truckFile, line)) {
            cout << line << endl;
        }
        truckFile.close();
    } else {
        cout << "No saved truck information found." << endl;
    }

    ifstream carFile("car_info.txt");
    if (carFile.is_open()) {
        cout << "\nSaved Car Information:" << endl;
        while (getline(carFile, line)) {
            cout << line << endl;
        }
        carFile.close();
    } else {
        cout << "No saved car information found." << endl;
    }

    ifstream userFile("user_info.txt");
    if (userFile.is_open()) {
        cout << "\nSaved User Information:" << endl;
        while (getline(userFile, line)) {
            cout << line << endl;
        }
        userFile.close();
    } else {
        cout << "No saved user information found." << endl;
    }
    ifstream ticketFile("tickets_info.txt");
    if (ticketFile.is_open()) {
        cout << "\nSaved ticket information:" << endl;
        while (getline(ticketFile, line)) {
            cout << line << endl;
        }
        ticketFile.close();
    } else {
        cout << "No saved ticket information found." << endl;
    }

}

