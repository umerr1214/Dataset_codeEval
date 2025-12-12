#include <iostream>
using namespace std;

class WeatherReport {
private:
    double temps[7];

public:
    WeatherReport(double t[7]) {
        for(int i=0;i<7;i++)
            temps[i] = t[i]
    }

    double maxTemp() {
        double m = temps[0];
        for(int i=1;i<7;i++)
            if(temps[i] > m) m = temps[i];
        return m;
    }

    void display() { cout << "Max: " << maxTemp() << endl; }
};

int main() {
    double t[7] = {20,22,19,25,21,23,24};
    WeatherReport wr(t);
    wr.display();
    return 0;
}
