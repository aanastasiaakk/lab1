#include "User.h"
#include <iostream>
using namespace std;

User::User() : User(0, "-") {}

User::User(int age_, const char* name_) : age(age_) {
    strcpy(name, name_);
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

void User::printInfo() const {
        cout << "User's age: " << this->getAge() << endl;
        cout << "User's name: " << this->getName() << endl;
    }

User::~User() {}
