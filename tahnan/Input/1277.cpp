#include <iostream>
using namespace std;
class Invoice{public:string item;int qty;float price;Invoice(string n,int q,float p){item=n;qty=q;price=p;}float total(){float c=qty*price;if(qty>10)c*=0.9;return c;}void display(){cout<<item<<": "<<total()<<endl;}};int main(){Invoice i("Book",12,10),j("Pen",5,2);i.display();j.display();return 0;}
