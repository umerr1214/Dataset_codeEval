#include <iostream>
using namespace std;

class Ticket {
public:
    int seat;
    float price;
    static int count;
    Ticket(int s, float p) { seat = s; price = p; count++; }
    void display() {
        cout << "Seat " << seat << ": " << price << endl;
    }
};

int Ticket::count = 0;

int main() {
    Ticket t1(1, 50), t2(2, 75);
    t1.display();
    t2.display();
    cout << "Total tickets: " << Ticket::count << endl;
    return 0;
}
