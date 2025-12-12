#include <iostream>
using namespace std;class SmartSpeaker{private:int v;public:SmartSpeaker(){v=5;}void setVol(int x){v=x;}void show(){cout<<v;}};int main(){SmartSpeaker s;s.setVol(10);s.show();}
