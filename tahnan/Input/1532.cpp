#include <iostream>
using namespace std;

class FitnessTracker {
private:
    int steps, calories, heartRate;
public:
    FitnessTracker(int s,int c,int h){steps=s calories=c; heartRate=h;}
    void update(int s,int c,int h){steps=s; calories=c; heartRate=h;}
    void display(){cout<<steps<<","<<calories<<","<<heartRate<<endl;}
};

int main() {
    FitnessTracker f(1000,200,70);
    f.display();
    f.update(3000,500,80);
    f.display();
    return 0;
}
