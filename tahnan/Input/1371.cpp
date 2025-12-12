#include <iostream>
#include <vector>
using namespace std;

class Passenger {
public:
    string name;
    Passenger(string n){name=n;}
};

class Reservation {
private:
    vector<Passenger> seats;
    int capacity;
public:
    Reservation(int c){capacity=c;}
    void book(Passenger p){
        if(seats.size()>=capacity) cout<<"Flight full\n"; // robustness issue: no exception
        else seats.push_back(p);
    }
    void cancel(string name){
        // robustness issue: no check if passenger exists
        for(int i=0;i<seats.size();i++){
            if(seats[i].name==name){
                seats.erase(seats.begin()+i);
                break;
            }
        }
    }
    void show(){
        for(auto p:seats) cout<<p.name<<" ";
        cout<<endl;
    }
};

int main(){
    Reservation r(2);
    r.book(Passenger("Alice"));
    r.book(Passenger("Bob"));
    r.book(Passenger("Charlie")); // edge case
    r.show();
    r.cancel("Daniel"); // edge case
    r.show();
    return 0;
}
