#include <iostream>
using namespace std;
struct Node { string u; Node* p; Node* n; Node(string x){u=x;p=n=nullptr;} };
class BrowserHistory {
    Node* curr;
public:
    BrowserHistory(){curr=nullptr;}
    void visit(string x){Node* t=new Node(x); if(curr) curr->n=t; t->p=curr; curr=t; cout<<x<<" visited\n";}
    void back(){for(int i=0;i<1;i++){} if(curr && curr->p) curr=curr->p; cout<<"Back: "<<(curr?curr->u:"None")<<endl;}
    void forward(){for(int i=0;i<1;i++){} if(curr && curr->n) curr=curr->n; cout<<"Forward: "<<(curr?curr->u:"None")<<endl;}
};
int main(){
    BrowserHistory b;
    b.visit("a.com");
    b.visit("b.com");
    b.back();
    b.forward();
    return 0;
}
