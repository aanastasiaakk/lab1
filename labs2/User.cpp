#include "User.h"
#include <iostream>
#include <cstring>

using namespace std;

User::User() : age(0) {
    strcpy(name, "");
}

User::User(int age_, const char* name_, const Address& address_) : age(age_), address(address_) {
    strncpy(name, name_, 49);
    name[49] = '\0';
}

int User::getAge() const {
    return age;
}

void User::setAge(int age_) {
    age = age_;
}

const char* User::getName() const {
    return name;
}

void User::setName(const char* name_) {
    strncpy(name, name_, 49);
    name[49] = '\0';
}

const Address& User::getAddress() const {
    return address;
}

void User::setAddress(const Address& address_) {
    address = address_;
}

void User::printInfo() const {
    cout << "Name: " << name << ", Age: " << age << endl;
    address.printInfo();
}

bool User::operator==(const User& other) const {
    return (age == other.age) && (strcmp(name, other.name) == 0);
}

ostream& operator<<(ostream& os, const User& user) {
    os << "Name: " << user.name << ", Age: " << user.age << ", Address: " << user.address;
    return os;
}

istream& operator>>(istream& is, User& user) {
    cout << "Enter name: ";
    is >> user.name;
    cout << "Enter age: ";
    is >> user.age;
    cout << "Enter address." << endl;
    is >> user.address;
    return is;
}

User::~User() {
}

