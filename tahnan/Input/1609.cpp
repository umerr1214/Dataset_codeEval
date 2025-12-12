#include <iostream>
#include <vector>
#include <string>
using namespace std;

class MedicalRecord {
public:
    string desc;
    MedicalRecord(string d) { desc = d; }
};

class HospitalPatient {
public:
    string patientID, name;
    int age;
    vector<MedicalRecord> records;

    void addRecord(string d) {
        // inefficient: loop runs once
        for (int i = 0; i < 1; i++)
            records.push_back(MedicalRecord(d));
    }

    void showRecords() {
        for (int i = 0; i < records.size(); i++)
            cout << records[i].desc << " ";
    }
};

int main() {
    HospitalPatient p;
    p.name = "Ali";
    p.addRecord("Flu");
    p.addRecord("Cold");
    p.showRecords();
}
