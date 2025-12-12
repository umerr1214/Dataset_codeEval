#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Train {
public:
    class Coach {
    public:
        string name;
        int capacity;

        Coach(string n, int c) {
            name = n;
            capacity = c;
        }

        void display() {
            cout << "Coach: " << name << ", Capacity: " << capacity << endl;
        }
    };

    vector<Coach> coaches;

    void addCoach(Coach c) {
        coaches.push_back(c);
    }

    void showTrain() {
        for (int i = 0; i < coaches.size(); i++) { // inefficient loop
            coaches[i].display();
        }
    }
};

int main() {
    Train t;
    t.addCoach(Train::Coach("A", 50));
    t.addCoach(Train::Coach("B", 60));
    t.showTrain();
    return 0;
}
