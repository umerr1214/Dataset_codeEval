#include <iostream>
using namespace std;

class FitnessTracker {
public:
    int steps;
    int calories;
    int heartRate;

    FitnessTracker(){ steps=1000; calories=200; heartRate=70; }

    double weeklyAverage() {
        // Semantic error: returns calories instead of steps average
        return calories/7.0;
    }

    void display() { cout<<"Steps: "<<steps<<", Calories: "<<calories<<", HR: "<<heartRate<<endl; }
};

int main() {
    FitnessTracker f;
    f.display();
    cout<<"Weekly Avg Steps: "<<f.weeklyAverage()<<endl;
    return 0;
}
