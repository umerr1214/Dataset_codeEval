#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    string rev = "";
    for(int i=s.size()-1;i>=0;i--) rev += s[i];
    if(s==rev) cout << "Yes\n"; else cout << "No\n";
    return 0;
}
