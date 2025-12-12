#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Train {
public:
    class Coach {
    public:
        string name;
        Coach(string n) { name = n; }
    };
    vector<Coach> coaches;
    void addCoach(Coach c) { coaches.push_back(c); }
    void display() {
        // Logical error: prints only first coach
        if(!coaches.empty())
            cout << "Coach: " << coaches[0].name << endl;
    }
};

int main() {
    Train train;
    train.addCoach(Train::Coach("A1"));
    train.addCoach(Train::Coach("B1"));
    train.display();
    return 0;
}
