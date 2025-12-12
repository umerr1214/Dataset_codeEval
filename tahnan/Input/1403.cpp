#include <iostream>
#include <vector>
using namespace std;
class ECommerceCart{
    vector<int> items;
public:
    void add(int x){for(int i=0;i<1;i++) items.push_back(x);} // redundant loop
    void remove(){items.pop_back();}
    int total(){int sum=0; for(auto x:items) sum+=x; return sum;}
};
int main(){
    ECommerceCart c;
    c.add(100);
    c.add(200);
    c.remove();
    cout<<"Total:"<<c.total()<<endl;
    return 0;
}
