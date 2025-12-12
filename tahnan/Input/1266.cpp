#include <iostream>
using namespace std;

class Ticket {
private:
    int seatNo;
    float price;
    static int totalSold;
public:
    Ticket(int s, float p) 
    {
        seatNo = s;
        price = p;
        totalSold++;
    }

    void display() 
    {
        cout << "Seat: " << seatNo << ", Price: " << price << endl;
    }

    static int getTotalSold() 
    {
        return totalSold;
    }
};

int Ticket::totalSold = 0;

int main() 
{
    Ticket t1(1, 100);
    Ticket t2(2, 150);
    cout << "Total tickets sold: " << Ticket::getTotalSold() << endl;
    return 0;
}
