#include <iostream>
#include <vector>
#include <string>
using namespace std;

class MedicalRecord {
public:
    string desc;
    MedicalRecord(string d){ desc=d; }
};

class HospitalPatient {
private:
    int id;
    string name;
    int age;
    vector<MedicalRecord> records;
public:
    HospitalPatient(int i,string n,int a){ id=i; name=n; age=a; }

    void addRecord(string d){
        // Robustness: no empty string check
        records.push_back(MedicalRecord(d));
    }

    void display(){
        cout<<id<<" "<<name<<" "<<age<<endl;
        for(auto &r: records) cout<<r.desc<<endl;
    }
};

int main(){
    HospitalPatient p(1,"John",30);
    p.addRecord("Flu");
    p.addRecord("Checkup");
    p.display();
    return 0;
}
