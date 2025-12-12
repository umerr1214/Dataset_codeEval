#include <iostream>
using namespace std;
int main() {
    int n = 121, rev = 0, temp = n;
    while(temp > 0) {
        rev = rev * 10 + temp % 10;
        temp = temp / 100;
    }
    if(rev == n)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}
