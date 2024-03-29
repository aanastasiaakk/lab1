#ifndef LABS2_USER_H
#define LABS2_USER_H

#include <cstring>

class User {
private:
    int age;
    char name[50];

public:
    User();
    User(int age_, const char* name_);

    int getAge() const;
    void setAge(int age_);

    const char* getName() const;
    void setName(const char* name_);

    ~User();
};

#endif // USER_H

