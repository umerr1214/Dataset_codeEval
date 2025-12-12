#include <iostream>
#include <map>
#include <string>
using namespace std;
class CW{public:map<string,double> b;void buy(string c,double a){b[c]+=a;}void sell(string c,double a){b[c]-=a;}void show(){for(auto x:b)cout<<x.first<<": "<<x.second<<endl;}};int main(){CW w;w.buy("BTC",2);w.sell("BTC",1);w.show();return 0;}
