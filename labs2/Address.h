#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>

using namespace std;

class Address {
private:
    char city[50];
    char street[50];
    int numbuilding;
public:
    Address();
    Address(const char* city, const char* street, int numbuilding);

    const char* getCity() const;
    void setCity(const char* city);
    const char* getStreet() const;
    void setStreet(const char* street);

    void printInfo() const;

    friend ostream& operator<<(ostream& os, const Address& address);
    friend istream& operator>>(istream& is, Address& address);
};

#endif
