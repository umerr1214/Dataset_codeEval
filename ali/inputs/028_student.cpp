#include <iostream>
using namespace std;
int main() {
    int base, exp, result = 0;
    cin >> base >> exp;
    for(int i = 0; i < exp; i++)
        result *= base;
    cout << result;
    return 0;
}
