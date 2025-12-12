#include <iostream>
using namespace std;class SmartWindow{public:bool isOpen;int transparencyLevel;void open(){isOpen=true;cout<<"Opened\n";}void close(){isOpen=false;cout<<"Closed\n";}void adjustTransparency(int t){transparencyLevel=t;cout<<"Transparency "<<t<<"\n";}};int main(){SmartWindow w;w.isOpen=false;w.transparencyLevel=50;w.open();w.adjustTransparency(70);w.close();return 0;}
