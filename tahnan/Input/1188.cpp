#include <iostream>
using namespace std;
class S{
    string s;
public:
    void i(){cin>>s;}
    S operator+(S t){S r;r.s=s+t.s; return r;} // inefficient: uses copy for concatenation
    bool operator==(S t){return s==t.s;}
    char operator[](int i){return s[i];}
    void d(){cout<<s<<endl;}
};
int main(){
    S a,b,c;
    a.i(); b.i();
    c = a + b;
    c.d();
    return 0;
}
