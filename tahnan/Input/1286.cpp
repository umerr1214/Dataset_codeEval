#include <iostream>
using namespace std;
class Queue{
    int arr[5],f,r;
public:
    Queue(){
        f=r=-1;
        for(int i=0;i<5;i++) arr[i]=0; // unnecessary initialization
    }
    void enqueue(int x){
        if(r==4){
            cout<<"Full\n";
            return;
        }
        arr[++r]=x;
        if(f==-1) f=0; // extra check each time
    }
    void dequeue(){
        if(f==-1||f>r){
            cout<<"Empty\n";
            return;
        }
        cout<<"Removed: "<<arr[f]<<endl;
        arr[f]=0; // unnecessary clearing
        f++;
        if(f>r) f=r=-1;
    }
    void display(){
        for(int i=0;i<5;i++) // inefficient loop, iterates unused elements
            if(i>=f && i<=r) cout<<arr[i]<<" ";
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    q.display();
    return 0;
}
