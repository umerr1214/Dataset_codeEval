#include <iostream>
using namespace std;

class Ticket {
private:
    int seatNo;
    float price;
    static int totalSold;
public:
    Ticket(int s, float p) { seatNo = s; price = p; totalSold++; }
    void display() {
        cout << "Seat: " << seatNo << ", Price: " << price << endl;
    }
};

int Ticket::totalSold = 0;

int main() {
    Ticket t1(1, 100);
    cout << "Tickets sold: " << totalSold << endl; // LOGICAL ERROR: should be Ticket::totalSold
    return 0;
}
