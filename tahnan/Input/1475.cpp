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
        // Robustness issue: does not handle empty train
        for(int i=0;i<coaches.size();i++)
            cout << "Coach: " << coaches[i].name << endl;
    }
};

int main() {
    Train train;
    train.addCoach(Train::Coach("A1"));
    train.addCoach(Train::Coach("B1"));
    train.display();
    return 0;
}
