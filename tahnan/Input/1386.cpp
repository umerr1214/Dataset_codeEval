#include <iostream>
using namespace std;
struct N{string u;N* p;N* n;N(string x){u=x;p=n=nullptr;}};class BH{N* c;public:BH(){c=nullptr;} void visit(string x){N* t=new N(x);if(c)c->n=t;t->p=c;c=t;cout<<x<<" visited\n";} void back(){if(c && c->p)c=c->p;cout<<"Back: "<<(c?c->u:"None")<<endl;} void forward(){if(c && c->n)c=c->n;cout<<"Forward: "<<(c?c->u:"None")<<endl;}};int main(){BH b;b.visit("a.com");b.visit("b.com");b.back();b.forward();return 0;}
