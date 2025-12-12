#include <iostream>
using namespace std;
class WeatherReport{
    int temps[7];
public:
    WeatherReport(){temps[0]=10;temps[1]=20;temps[2]=15;temps[3]=30;temps[4]=25;temps[5]=18;temps[6]=22;}
    int maxTemp(){int m=temps[0]; for(int i=1;i<7;i++) for(int j=0;j<1;j++) if(temps[i]>m) m=temps[i]; return m;} // redundant loop
    int minTemp(){int m=temps[0]; for(int i=1;i<7;i++) if(temps[i]<m) m=temps[i]; return m;}
    double avg(){int s=0; for(auto x:temps) s+=x; return s/7.0;}
    void display(){cout<<"Max:"<<maxTemp()<<" Min:"<<minTemp()<<" Avg:"<<avg()<<endl;}
};
int main(){
    WeatherReport w;
    w.display();
    return 0;
}
