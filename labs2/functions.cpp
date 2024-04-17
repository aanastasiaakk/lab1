//
// Created by Nastya on 08/04/2024.
//

#include "functions.h"
#include <iostream>
#include <fstream>

void addTruck(Truck* trucks[], int& count) {
    if (count >= MAX_VEHICLES) {
        cout << "Cannot add more trucks. Maximum limit reached." << endl;
        return;
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
    trucks[count++] = new Truck(brand, plate, numberOfDoors);
    cout << "Truck added successfully!" << endl;
}

void displayTrucks(Truck* trucks[], int count) {
   
    cout << "List of trucks:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << "Truck " << (i + 1) << ": " << *trucks[i] << endl;
    }
}


void addCar(Car* cars[], int& count) {
    if (count >= MAX_VEHICLES) {
        cout << "Cannot add more cars. Maximum limit reached." << endl;
        return;
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
    cars[count++] = new Car(brand, plate, numberOfDoors);
    cout << "Car added successfully!" << endl;
}

void displayCars(Car* cars[], int count) {

    cout << "List of cars:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << "Car "  << (i + 1) << ": " << endl << *cars[i] << endl;
    }
}

void addUser(User* users[], int& count) {
    if (count >= MAX_USERS) {
        cout << "Cannot add more users. Maximum limit reached." << endl;
        return;
    }

    int age;
    char name[50];

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    users[count++] = new User(age, name);
    cout << "User added successfully!" << endl;
}

void displayUsers( User* users[], int count) {
    cout << "Users:" << endl;
    for (int i = 0; i < count; ++i) {
        users[i]->printInfo();
    }
}


void saveCarsToFile(const Car cars[], int carCount, const string& filename) {
    ofstream outFile(filename);

    if (outFile.is_open()) {
        outFile << carCount << endl; // Записуємо кількість автомобілів

        for (int i = 0; i < carCount; ++i) {
            outFile << cars[i] << endl;
        }

        outFile.close();
        cout << "Cars data saved successfully." << endl;
    } else {
        cout << "Unable to open file for writing." << endl;
    }
}

void loadCarsFromFile(Car cars[], int& carCount, const string& filename) {
    ifstream inFile(filename);
    carCount = 0; // Записуємо 0 автомобілів початково, оскільки ми завантажуємо їх з файлу

    if (inFile.is_open()) {
        inFile >> carCount; // Зчитуємо кількість автомобілів

        for (int i = 0; i < carCount; ++i) {
            inFile >> cars[i];
        }

        inFile.close();
        cout << "Cars data loaded successfully." << endl;
    } else {
        cout << "Unable to open file for reading." << endl;
    }
}

