#include<iostream>
#include<string>
using namespace std;class Student{public:string name;int roll;double marks;void display(){cout<<name<<" "<<roll<<" "<<marks<<endl;}};int main(){Student s;cin>>s.name>>s.roll>>s.marks;s.display();return 0;}
