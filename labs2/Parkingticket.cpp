#include "Parkingticket.h"
#include <iostream>
using namespace std;

Parkingticket::Parkingticket() : Parkingticket(0, 0) {}

Parkingticket::Parkingticket(int number, int date_) : number_ticket(number), date(date_) {}

Parkingticket::Parkingticket(const Parkingticket& other) : number_ticket(other.number_ticket), date(other.date){
    cout << "Copy constructor was called for parking ticket" << endl;
}

Parkingticket::Parkingticket(Parkingticket&& other) noexcept : number_ticket(other.number_ticket), date(other.date) {
    other.number_ticket = 0;
    other.date = 0;
    cout << "Move constructor was called for parking ticket" << endl;
}

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

void Parkingticket::printInfo() const {
    cout << "Parking ticket number: " << this->getNumberTicket() << endl;
    cout << "Date: " << this->getDate() << endl;
}

ostream& operator<<(ostream& os, const Parkingticket& ticket) {
    os << "Ticket number: " << ticket.number_ticket << ", Date: " << ticket.date;
    return os;
}

istream& operator>>(istream& is, Parkingticket& ticket) {
    is >> ticket.number_ticket >> ticket.date;
    return is;
}

Parkingticket::~Parkingticket(){};