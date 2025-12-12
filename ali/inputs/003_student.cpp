#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout << "Enter word:";
    cin >> s
    string rev = s;
    reverse(rev.begin(), rev.end());
    if(s == rev)
        cout << "Palindrome"
    else
        cout << "Not Palindrome";
    return 0;
}
