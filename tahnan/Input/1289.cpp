#include <iostream>
using namespace std;
template<typename T>
class Stack{
    T arr[5];
    int top;
public:
    Stack(){top=-1;}
    void push(T x){
        if(top==4){cout<<"Full\n"; return;}
        arr[++top]=x;
    }
    void pop(){
        if(top==-1){cout<<"Empty\n"; return;}
        cout<<"Popped: "<<arr[top]<<endl;
        arr[top]=0; // unnecessary
        top--;
    }
    T peek(){
        T val=arr[top]; // extra variable
        return val;
    }
};
int main(){
    Stack<int> s;
    s.push(10); s.push(20); s.pop();
    cout<<s.peek()<<endl;
    return 0;
}
