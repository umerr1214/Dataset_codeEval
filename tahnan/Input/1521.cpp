#include <iostream>
#include <string>
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
        cout << "Hotel reserved" << endl;
    }
};

class BusReservation : public ReservationSystem {
public:
    void reserve() override {
        cout << "Bus reserved" << endl;
    }
};

class CinemaSeatReservation : public ReservationSystem {
public:
    void reserve() override {
        cout << "Cinema seat reserved" << endl;
    }
};

int main() {
    ReservationSystem* r1 = new HotelReservation();
    ReservationSystem* r2 = new BusReservation();
    ReservationSystem* r3 = new CinemaSeatReservation();
    r1->reserve();
    r2->reserve();
    r3->reserve();
    delete r1; delete r2; delete r3;
    return 0;
}
