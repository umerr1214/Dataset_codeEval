#include <iostream>
#include <vector>
#include <string>
using namespace std;

class MedicalRecord {
public:
    string desc;
    MedicalRecord(string d) : desc(d) {}
};

class HospitalPatient {
private:
    vector<MedicalRecord> records;

public:
    string name;
    int age;
    string patientID;

    void addRecord(const string &d) { records.push_back(MedicalRecord(d)); }

    void showRecords() const {
        for (const auto &r : records) cout << r.desc << " ";
    }
};

int main() {
    HospitalPatient p;
    p.name = "Ali";
    p.addRecord("Flu");
    p.addRecord("Cold");
    p.showRecords();
}
