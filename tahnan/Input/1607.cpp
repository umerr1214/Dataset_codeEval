#include <iostream>
#include <vector>
using namespace std;

class FitnessTracker {
public:
    vector<int> steps;
    vector<int> calories;
    vector<int> heartRate;

    void update(int s, int c, int h) {
        // inefficient: storing in separate vectors instead of a struct
        steps.push_back(s);
        calories.push_back(c);
        heartRate.push_back(h);
    }

    double weeklyAverageSteps() {
        double sum = 0;
        for (int i = 0; i < steps.size(); i++)
            sum += steps[i];
        return sum / steps.size();
    }
};

int main() {
    FitnessTracker f;
    f.update(5000, 200, 70);
    f.update(7000, 300, 72);
    cout << f.weeklyAverageSteps();
}
