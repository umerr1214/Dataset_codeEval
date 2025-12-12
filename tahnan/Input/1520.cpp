#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Train {
public:
    class Coach {
    public:
        string name;
        int seats;
        Coach(string n, int s) {
            name = n;
            seats = s;
        }
    };

private:
    vector<Coach> coaches;

public:
    void addCoach(Coach c) {
        coaches.push_back(c);
    }

    void displayDetails() {
        cout << "Train Details:" << endl;
        for (int i = 0; i < coaches.size(); i++) {
            cout << "Coach: " << coaches[i].name << ", Seats: " << coaches[i].seats << endl;
        }
    }
};

int main() {
    Train t;
    t.addCoach(Train::Coach("A1", 50));
    t.addCoach(Train::Coach("B1", 60));
    t.displayDetails();
    return 0;
}
