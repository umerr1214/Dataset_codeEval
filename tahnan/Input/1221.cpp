#include <iostream>
using namespace std;

class Ticket {
private:
    int seatNo;
    float price;
    static int totalSold;
public:
    Ticket(int s, float p) {
        seatNo = s;
        price = p;
        totalSold++;
    }
};

int Ticket::totalSold = 0;

int main() {
    Ticket t1(1, 100);
    cout << "Ticket sold: " << Ticket::totalSold << endl  // missing semicolon
    return 0;
}
