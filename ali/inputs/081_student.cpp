#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = 1;
        for (int j = 1; j <= i; j++) fact *= j;
    }
    cout << fact << endl;
    return 0;
}
