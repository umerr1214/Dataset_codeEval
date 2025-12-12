#include <iostream>
using namespace std;class SmartMirror{public:int displayMode,brightness,temperature;void showWeather(){cout<<"Weather Sunny\n";}void showTime(){cout<<"Time 10AM\n";}void adjustBrightness(int b){brightness=b;cout<<"Brightness "<<b<<"\n";}};int main(){SmartMirror m;m.displayMode=1;m.brightness=50;m.temperature=25;m.showWeather();m.showTime();m.adjustBrightness(80);return 0;}
