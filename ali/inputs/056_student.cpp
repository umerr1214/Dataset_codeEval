#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream fin("data.txt");
    string s;
    fin >> s;
    cout << s;
    return 0;
}
