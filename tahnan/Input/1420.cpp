#include <iostream>
using namespace std;

class WeatherReport {
    double temps[7];
public:
    WeatherReport(double t[7]) {
        for(int i=0;i<7;i++) {
            temps[i] = t[i];
        }
    }
    
    double maxTemp() {
        double m = temps[0];
        for(int i=1;i<7;i++) {
            if(temps[i] > m) m = temps[i];
        }
        return m;
    }
    
    double minTemp() {
        double m = temps[0];
        for(int i=1;i<7;i++) {
            if(temps[i] < m) m = temps[i];
        }
        return m;
    }
    
    double avgTemp() {
        double sum = 0;
        for(int i=0;i<7;i++) sum += temps[i];
        return sum/7;
    }
};

int main() {
    double t[7] = {30,32,28,31,29,33,30};
    WeatherReport wr(t);
    cout << "Max:" << wr.maxTemp() << " Min:" << wr.minTemp() << " Avg:" << wr.avgTemp() << endl;
    return 0;
}
