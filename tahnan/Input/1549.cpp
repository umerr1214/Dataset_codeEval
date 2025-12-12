#include <iostream>
#include <vector>
#include <string>
using namespace std;

class MedicalRecord {
public:
    string diagnosis;
    MedicalRecord(string d){ diagnosis=d; }
};

class HospitalPatient {
private:
    string name;
    vector<MedicalRecord> records;
public:
    HospitalPatient(string n){ name=n; }

    void addRecord(MedicalRecord r){ records.push_back(r); }

    void displayRecords() {
        // Logical error: skips first record
        for(int i=1;i<records.size();i++)
            cout<<records[i].diagnosis<<endl;
    }
};

int main() {
    HospitalPatient p("John");
    p.addRecord(MedicalRecord("Flu"));
    p.addRecord(MedicalRecord("Cold"));
    p.displayRecords();
    return 0;
}
