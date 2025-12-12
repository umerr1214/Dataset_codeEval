#include<iostream>
#include<string>
using namespace std;class Employee{private:int id;string name;public:void setData(int i,string n){id=i;name=n;}int getId(){return id;}string getName(){return name;}};int main(){Employee e;int id;string n;cin>>id>>n;e.setData(id,n);cout<<e.getId()<<" "<<e.getName()<<endl;return 0;}
