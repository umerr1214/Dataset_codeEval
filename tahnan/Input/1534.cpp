#include <iostream>
#include <vector>
#include <string>
using namespace std;

class MedicalRecord {
public:
    string diagnosis;
    MedicalRecord(string d){diagnosis=d}
};

class HospitalPatient {
private:
    int patientID;
    string name;
    int age;
    vector<MedicalRecord> records;
public:
    HospitalPatient(int id,string n,int a){patientID=id name=n; age=a;}
    void addRecord(MedicalRecord r){records.push_back(r);}
    void displayRecords(){
        for(int i=0;i<records.size();i++)
            cout<<records[i].diagnosis<<endl
    }
};

int main() {
    HospitalPatient p(1,"John",30);
    p.addRecord(MedicalRecord("Flu"));
    p.addRecord(MedicalRecord("Cold"));
    p.displayRecords();
    return 0;
}
