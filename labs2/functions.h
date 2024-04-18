//
// Created by Nastya on 08/04/2024.
//

#ifndef LABS2_FUNCTIONS_H
#define LABS2_FUNCTIONS_H
#include "Truck.h"
#include "Car.h"
#include "User.h"
#include "Parkingticket.h"


const int MAX_VEHICLES = 100;
const int MAX_USERS = 100;
const int MAX_TICKETS = 100;

void addTruck(Truck* trucks[], int& tcount);

void addCar(Car* cars[], int& ccount);

void addUser(User* users[], int& ucount);

void displaySavedInfo();

void addTicket(Parkingticket* tickets[], int& tkcount);


#endif //LABS2_FUNCTIONS_H
