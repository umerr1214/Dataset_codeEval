#include <iostream>
#include <fstream>
using namespace std;
class FM{ofstream f;public:void C(string n){f.open(n);}void W(string t){f<<t;}void Cl(){f.close();}};int main(){FM f;f.C("file.txt");f.W("hello");f.Cl();cout<<"Done"<<endl;return 0;}
