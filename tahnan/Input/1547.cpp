#include <iostream>
using namespace std;

class FitnessTracker {
public:
    int steps;
    int calories;
    int heartRate;
    FitnessTracker(){ steps=1000; calories=200; heartRate=70; }

    double weeklyAverage() {
        // Logical error: divides by 5 instead of 7
        return steps/5.0;
    }

    void display() { cout << "Steps: "<<steps<<", Calories: "<<calories<<", HR: "<<heartRate<<endl; }
};

int main() {
    FitnessTracker f;
    f.display();
    cout << "Weekly Avg Steps: "<<f.weeklyAverage()<<endl;
    return 0;
}
