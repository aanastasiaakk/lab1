#ifndef LABS2_FUNCTIONS_H
#define LABS2_FUNCTIONS_H
#include "Truck.h"
#include "Car.h"
#include "User.h"
#include "Parkingticket.h"
#include <fstream>
#include <iostream>


const int MAX_VEHICLES = 100;
const int MAX_USERS = 100;

void addTruck(Truck* trucks[], int& count);

void displayTrucks (Truck* trucks[], int count);

/*void addCar(Car* cars[], int& count);

void displayCars (Car* cars[], int count);*/

void addUser(User* users[], int& count);

void displayUsers(User* users[], int count);

void addTickets(Parkingticket* parkingtickets[], int& count);

void displayTickets(Parkingticket* parkingtickets[], int count);

/*
void readCar(){
    ifstream finCar("Car.txt");
    Car car("","",0);
    if (!finCar.is_open())
        throw out_of_range("file is close!!!");
    while(finCar>>car){
        cout<<car<<endl;
    }
}
*/

#endif //LABS2_FUNCTIONS_H
