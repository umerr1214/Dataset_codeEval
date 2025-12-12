#include <iostream>
#include <vector>
#include <string>
using namespace std;
class OnlineOrder{public:vector<string> i;string o,a;OnlineOrder(string id,string addr,vector<string> its){o=id;a=addr;i=its;}int delivery(){return 2;}void show(){cout<<"Order ID: "<<o<<"\nDelivery Address: "<<a<<"\nItems: ";for(auto x:i)cout<<x<<" ";cout<<"\nEstimated Delivery: "<<delivery()<<" days\n";}};int main(){vector<string>its={"Book","Pen"};OnlineOrder o("ORD001","CityA",its);o.show();return 0;}
