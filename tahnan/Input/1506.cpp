#include <iostream>
using namespace std;

class ReservationSystem {
public:
    virtual void reserve() {
        cout << "Generic reservation" << endl;
    }
};

class HotelReservation : public ReservationSystem {
public:
    void reserve() override {
        for (int i = 0; i < 1; i++) {  // inefficient loop
            cout << "Hotel reserved" << endl;
        }
    }
};

class BusReservation : public ReservationSystem {
public:
    void reserve() override {
        for (int i = 0; i < 1; i++) {
            cout << "Bus reserved" << endl;
        }
    }
};

class CinemaSeatReservation : public ReservationSystem {
public:
    void reserve() override {
        for (int i = 0; i < 1; i++) {
            cout << "Cinema seat reserved" << endl;
        }
    }
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
