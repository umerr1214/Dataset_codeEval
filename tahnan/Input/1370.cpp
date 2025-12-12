#include <iostream>
using namespace std;

class WeatherReport {
private:
    int temps[7];
public:
    WeatherReport(int t[]) { for(int i=0;i<7;i++) temps[i]=t[i]; }

    int maxTemp() {
        int maxV = temps[0];
        for(int i=1;i<7;i++)
            if(temps[i]>maxV) maxV=temps[i];
        return maxV;
    }

    int minTemp() {
        int minV = temps[0];
        for(int i=1;i<7;i++)
            if(temps[i]<minV) minV=temps[i];
        return minV;
    }

    double avgTemp() {
        int sum=0;
        for(int i=0;i<7;i++) sum+=temps[i];
        return sum/7; // robustness issue: integer division
    }
};

int main() {
    int week[7]={30,25,28,32,27,29,31};
    WeatherReport wr(week);
    cout << "Max: " << wr.maxTemp() << endl;
    cout << "Min: " << wr.minTemp() << endl;
    cout << "Avg: " << wr.avgTemp() << endl;
    return 0;
}
