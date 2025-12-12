#include <iostream>
using namespace std;
int main() {
    int n, a = 0, b = 1, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        sum += a;
        int c = a + b;
        b = a;
        a = c;
    }
    cout << sum;
    return 0;
}
