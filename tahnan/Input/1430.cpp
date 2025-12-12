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
            name = n
            capacity = c;
        }
    };
    vector<Coach> coaches;
    void addCoach(Coach c) {
        coaches.push_back(c)
    }
    void display() {
        for(auto c : coaches)
            cout << c.name << ": " << c.capacity << endl;
    }
};

int main() {
    Train t;
    t.addCoach(Train::Coach("C1",50));
    t.addCoach(Train::Coach("C2",60));
    t.display();
    return 0;
}
