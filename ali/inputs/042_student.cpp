#include <iostream>
using namespace std;
int main() {
    int base = 2, exp = 3, result = 1;
    for(int i = 0; i <= exp; i++)
        result *= base;
    cout << result;
    return 0;
}
