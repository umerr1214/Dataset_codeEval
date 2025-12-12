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
public: // Semantic error: records vector public
    string name;
    vector<MedicalRecord> records;

    HospitalPatient(string n){ name=n; }

    void addRecord(MedicalRecord r){ records.push_back(r); }

    void displayRecords() {
        // Semantic error: prints only first record
        if(records.size()>0)
            cout<<records[0].diagnosis<<endl;
    }
};

int main() {
    HospitalPatient p("John");
    p.addRecord(MedicalRecord("Flu"));
    p.addRecord(MedicalRecord("Cold"));
    p.displayRecords();
    return 0;
}
