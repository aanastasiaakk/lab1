//
// Created by Nastya on 08/04/2024.
//

#ifndef LABS2_FUNCTIONS_H
#define LABS2_FUNCTIONS_H
#include "Truck.h"
#include "Car.h"
#include "User.h"


const int MAX_VEHICLES = 100;
const int MAX_USERS = 100;

void addTruck(Truck* trucks[], int& count);

void displayTrucks (Truck* trucks[], int count);

void addCar(Car* cars[], int& count);

void displayCars (Car* cars[], int count);

void addUser(User* users[], int& count);

void displayUsers(User* users[], int count);

void saveCarsToFile(const Car cars[], int carCount, const string& filename);

void loadCarsFromFile(Car cars[], int& carCount, const string& filename);

#endif //LABS2_FUNCTIONS_H
