#include <iostream>
#include <fstream>
using namespace std;
class E{
    string n; int id;
public:
    void i(){cin>>id>>n;}
    void s(){ofstream f("emp.txt",ios::app); f<<id<<" "<<n<<endl;}
    void d(){ifstream f("emp.txt"); string l; while(getline(f,l)) cout<<l<<endl;} // inefficient: reads file every time
};
int main(){
    E e1,e2;
    e1.i(); e1.s();
    e2.i(); e2.s();
    e1.d();
    return 0;
}
