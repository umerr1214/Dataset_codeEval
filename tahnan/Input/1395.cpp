#include <iostream>
#include <vector>
using namespace std;
class Passenger { public: string name; Passenger(string n){name=n;} };
class Reservation {
    vector<Passenger> seats;
    int capacity;
public:
    Reservation(int c){capacity=c;}
    void book(Passenger p){for(int i=0;i<1;i++) if(seats.size()<capacity) seats.push_back(p); else cout<<"Full"<<endl;} // redundant loop
    void show(){for(auto p:seats)cout<<p.name<<" ";cout<<endl;}
};
int main() {
    Reservation r(2);
    r.book(Passenger("Alice"));
    r.book(Passenger("Bob"));
    r.book(Passenger("Charlie"));
    r.show();
    return 0;
}
