#include <iostream>
#include <vector>
using namespace std;

class FitnessTracker {
private:
    struct Stats { int steps, calories, heartRate; };
    vector<Stats> weeklyStats;

public:
    void update(int s, int c, int h) { weeklyStats.push_back({s, c, h}); }

    double weeklyAverageSteps() const {
        double sum = 0;
        for (const auto &stat : weeklyStats) sum += stat.steps;
        return weeklyStats.empty() ? 0 : sum / weeklyStats.size();
    }
};

int main() {
    FitnessTracker f;
    f.update(5000, 200, 70);
    f.update(7000, 300, 72);
    cout << f.weeklyAverageSteps();
}
