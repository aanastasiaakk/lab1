#ifndef LABS2_PARKINGTICKET_H
#define LABS2_PARKINGTICKET_H

class Parkingticket {
private:
    int number_ticket;
    int date;

public:
    Parkingticket();
    Parkingticket(int number, int date_);
    Parkingticket(const Parkingticket &other);
    Parkingticket(Parkingticket&& other) noexcept;

    int getNumberTicket() const;
    void setNumberTicket(int number);

    int getDate() const;
    void setDate(int date_);
    void printInfo() const;

    ~Parkingticket();
};

#endif // PARKINGTICKET_H

