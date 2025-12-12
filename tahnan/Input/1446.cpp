#include <iostream>
using namespace std;

class ReservationSystem {
public:
    virtual void reserve() { cout << "Generic reservation" << endl; }
};

class HotelReservation : public ReservationSystem {
public:
    void reserve() override { cout << "Bus reserved" << endl; } // logical error
};

class BusReservation : public ReservationSystem {
public:
    void reserve() override { cout << "Hotel reserved" << endl; } // logical error
};

class CinemaSeatReservation : public ReservationSystem {
public:
    void reserve() override { cout << "Seat reserved" << endl; }
};

int main() {
    HotelReservation h;
    BusReservation b;
    CinemaSeatReservation c;
    h.reserve();
    b.reserve();
    c.reserve();
    return 0;
}
