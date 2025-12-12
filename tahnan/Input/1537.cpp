#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Flight {
public:
    string src,dest,time;
    Flight(string s,string d,string t){src=s dest=d; time=t;}
};

class FlightSchedule {
private:
    vector<Flight> flights;
public:
    void addFlight(Flight f){flights.push_back(f);}
    void displayFlights(){
        for(int i=0;i<flights.size();i++)
            cout<<flights[i].src<<"->"<<flights[i].dest<<" at "<<flights[i].time<<endl
    }
};

int main() {
    FlightSchedule fs;
    fs.addFlight(Flight("NY","LA","10:00"));
    fs.addFlight(Flight("LA","SF","14:00"));
    fs.displayFlights();
    return 0;
}
