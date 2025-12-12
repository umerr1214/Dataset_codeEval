#include <iostream>
using namespace std;
class Queue{int arr[5],f,r;public:Queue(){f=r=-1;}void enqueue(int x){if(r==4){cout<<"Full\n";return;}if(f==-1)f=0;arr[++r]=x;}void dequeue(){if(f==-1||f>r){cout<<"Empty\n";return;}cout<<"Removed: "<<arr[f++]<<endl;if(f>r)f=r=-1;}void display(){for(int i=f;i<=r;i++)cout<<arr[i]<<" ";cout<<endl;}};int main(){Queue q;q.enqueue(1);q.enqueue(2);q.enqueue(3);q.dequeue();q.display();return 0;}
