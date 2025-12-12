#include <iostream>
using namespace std;

class FitnessTracker {
private:
    int steps;
    int calories;
    int heartRate;
public:
    FitnessTracker(){ steps=0; calories=0; heartRate=0; }

    void update(int s, int c, int h){
        // Robustness Issue: no validation for negative values
        steps += s;
        calories += c;
        heartRate = h;
    }

    double weeklyAverageSteps(){
        return steps / 7.0;  // okay
    }

    void display(){
        cout<<"Steps: "<<steps<<", Calories: "<<calories<<", HR: "<<heartRate<<endl;
    }
};

int main(){
    FitnessTracker f;
    f.update(7000,500,80);
    f.update(7000,600,90);
    f.display();
    cout<<f.weeklyAverageSteps()<<endl;
    return 0;
}
