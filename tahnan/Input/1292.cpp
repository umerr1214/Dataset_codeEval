#include <iostream>
using namespace std;
class Invoice{
public:
    string item;
    int qty;
    float price;
    Invoice(string n,int q,float p){item=n;qty=q;price=p;}
    float total(){
        float c=0;
        for(int i=0;i<qty;i++) c+=price; // inefficient loop instead of multiplication
        if(qty>10) c*=0.9;
        return c;
    }
    void display(){
        cout<<item<<": "<<total()<<endl;
    }
};
int main(){
    Invoice i("Book",12,10), j("Pen",5,2);
    i.display();
    j.display();
    return 0;
}
