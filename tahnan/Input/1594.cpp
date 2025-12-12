#include <iostream>
#include <vector>
#include <string>
using namespace std;class Record{public:string d;Record(string x){d=x;}};class HospitalPatient{public:string id,n;int a;vector<Record> r;HospitalPatient(string x,string y,int z){id=x;n=y;a=z;}void addRecord(string x){r.push_back(Record(x));}void show(){cout<<id<<" "<<n<<" "<<a<<" ";for(auto &i:r)cout<<i.d<<" ";}};int main(){HospitalPatient p("P1","Ali",30);p.addRecord("Checkup");p.show();}
