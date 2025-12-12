#include <iostream>
using namespace std;
int main() {
    int n = 1234, rev = 0;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n = n / 100;
    }
    cout << rev;
    return 0;
}
