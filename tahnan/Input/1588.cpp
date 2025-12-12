#include <iostream>
using namespace std;class Subscription{public:string n,p,e;Subscription(string x,string y,string z){n=x;p=y;e=z;}void renew(){e="2025-01-01";}void cancel(){p="None";}void show(){cout<<n<<" "<<p<<" "<<e;}};int main(){Subscription s("Ali","Gold","2024-01-01");s.renew();s.show();}
