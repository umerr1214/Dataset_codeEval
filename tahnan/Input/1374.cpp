#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    int marks;
    Student(string n,int m){name=n;marks=m;}
};

int main(){
    vector<Student> s;
    s.push_back(Student("Alice",90));
    s.push_back(Student("Bob",105)); // robustness issue: marks > 100
    for(auto st:s) cout<<st.name<<":"<<st.marks<<endl;
    return 0;
}
