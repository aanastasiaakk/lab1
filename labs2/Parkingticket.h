#ifndef LABS2_PARKINGTICKET_H
#define LABS2_PARKINGTICKET_H

#include <iostream>
using namespace std;


class Parkingticket {
private:
    int number_ticket;
    int date;

public:
    Parkingticket();
    Parkingticket(int number, int date_);
    Parkingticket(const Parkingticket &other);
    Parkingticket(Parkingticket &&other) noexcept;

    int getNumberTicket() const;
    void setNumberTicket(int number);
    int getDate() const;
    void setDate(int date_);

    void printInfo() const;

    friend ostream& operator<<(ostream& os, const Parkingticket& ticket);
    friend istream& operator>>(istream& is, Parkingticket& ticket);

    ~Parkingticket();
};

#endif // PARKINGTICKET_H