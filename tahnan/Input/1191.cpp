#include <iostream>
using namespace std;
class E{
public:
    int power;
    void i(){cin>>power;}
};
class C{
    E e;
public:
    void i(){e.i();}
    void d(){cout<<"Car power: "<<e.power<<endl;} // inefficient: composition used correctly but extra function calls
};
int main(){
    C c;
    c.i();
    c.d();
    return 0;
}
