#include<iostream>
#include<string>
using namespace std;
class Person{
public:
    string name;
    virtual void displayInfo()=0;
};
class Student:public Person{
    int roll;
public:
    Student(string n,int r){name=n;roll=r;}
    void displayInfo(){cout<<"Student: "<<name<<" "<<roll<<endl;}
};
class Teacher:public Person{
    string subject;
public:
    Teacher(string n,string s){name=n;subject=s;}
    void displayInfo(){cout<<"Teacher: "<<name<<" "<<subject<<endl;}
};
int main(){
    int ch; cin>>ch;
    if(ch==1){
        string n; int r; cin>>n>>r;
        Student s(n,r);
        s.displayInfo();
    } else {
        string n,sb; cin>>n>>sb;
        Teacher t(n,sb);
        t.displayInfo();
    }
    return 0;
}
