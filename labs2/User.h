#ifndef LABS2_USER_H
#define LABS2_USER_H

#include <cstring>
#include <iostream>

using namespace std;

class User {
private:
    int age;
    char name[50];
    static int count;
public:
    User();
    User(int age_, const char* name_);
    User(const User &other);

    int getAge() const;
    void setAge(int age_);
    const char* getName() const;
    void setName(const char* name_);
    static int getCount();

    void printInfo() const;

    bool operator==(const User& other) const;

    friend ostream& operator<<(ostream& os, const User& user);
    friend istream& operator>>(istream& is, User& user);

    ~User();
};

#endif // USER_H