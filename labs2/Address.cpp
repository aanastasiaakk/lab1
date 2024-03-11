#include "Address.h"
#include <iostream>
#include <cstring>

using namespace std;

Address::Address() {
    city[0] = '\0';
    street[0] = '\0';
    numbuilding = 0;
}

Address::Address(const char* city, const char* street, int numbuilding) {
    strncpy(this->city, city, 49);
    this->city[49] = '\0';
    strncpy(this->street, street, 49);
    this->street[49] = '\0';
    this->numbuilding = numbuilding;
}

const char* Address::getCity() const {
    return city;
}

void Address::setCity(const char* city) {
    strncpy(this->city, city, 49);
    this->city[49] = '\0';
}

const char* Address::getStreet() const {
    return street;
}

void Address::setStreet(const char* street) {
    strncpy(this->street, street, 49);
    this->street[49] = '\0';
}

void Address::printInfo() const {
    cout << "City: " << city << ", Street: " << street << ", Building number: " << numbuilding << endl;
}

ostream& operator<<(ostream& os, const Address& address) {
    os << "City: " << address.city << ", Street: " << address.street << ", Building number: " << address.numbuilding;
    return os;
}

istream& operator>>(istream& is, Address& address) {
    cout << "Enter city: ";
    is >> address.city;
    cout << "Enter street: ";
    is >> address.street;
    cout << "Enter building number: ";
    is >> address.numbuilding;
    return is;
}

