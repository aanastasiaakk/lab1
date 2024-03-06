#include "User.h"
#include <iostream>
using namespace std;


int User::count = 0;

User::User() {
    age = 0;
    strcpy(name, "");
    count++;
}

User::User(int age_, const char* name_) {
    age = age_;
    strcpy(name, name_);
    count++;
}

User::User(const User &other) {
    age = other.age;
    strcpy(name, other.name);
    count++;
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
    strcpy(name, name_);
}

int User::getCount() {
    return count;
}

void User::printInfo() const {
    cout << "Name: " << name << ", Age: " << age << endl;
}

bool User::operator==(const User& other) const {
    return (age == other.age && strcmp(name, other.name) == 0);
}

User::~User() {}