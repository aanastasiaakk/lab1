#ifndef USER_H
#define USER_H

#include "Address.h"
#include <iostream>
#include <cstring>

using namespace std;


class User {
private:
    int age;
    char name[50];
public:
    User();
    User(int age_, const char* name_);
    User(const User &other);

    int getAge() const;
    void setAge(int age_);
    const char* getName() const;
    void setName(const char* name_);

    void printInfo() const;

    bool operator==(const User& other) const;

    friend ostream& operator<<(ostream& os, const User& user);
    friend istream& operator>>(istream& is, User& user);

    ~User();
};

#endif // USER_H

