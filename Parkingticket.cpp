#include "Parkingticket.h"
#include <iostream>
using namespace std;

Parkingticket::Parkingticket() : Parkingticket(0, 0) {}

Parkingticket::Parkingticket(int number, int date_) : number_ticket(number), date(date_) {}

int Parkingticket::getNumberTicket() const {
    return number_ticket;
}

void Parkingticket::setNumberTicket(int number) {
    number_ticket = number;
}

int Parkingticket::getDate() const {
    return date;
}

void Parkingticket::setDate(int date_) {
    date = date_;
}

Parkingticket::~Parkingticket() {}