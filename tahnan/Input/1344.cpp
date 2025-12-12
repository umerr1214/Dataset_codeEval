#include <iostream>
using namespace std;

class WeatherReport {
private:
    int temps[7];

public:
    WeatherReport(int t[7]) {
        for(int i=0;i<7;i++) temps[i]=t[i];
    }

    int maxTemp() {
        int max = temps[0];
        for(int i=1;i<7;i++)
            if(temps[i] < max) max = temps[i]; // Logical error: uses < instead of >
        return max;
    }

    void display() { cout << "Max Temp: " << maxTemp() << endl; }
};

int main() {
    int week[7] = {20,25,22,30,18,24,26};
    WeatherReport wr(week);
    wr.display();
    return 0;
}
