#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    int rollNumber;
    double marks;
    void display(){
        cout<<name<<" "<<rollNumber<<" "<<marks<<endl;
    }
};
int main(){
    Student s;
    cin>>s.name>>s.rollNumber>>s.marks;
    s.display();
    return 0;
}
