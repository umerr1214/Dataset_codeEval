#include <iostream>
using namespace std;
int main() {
    int x, sum = 0;
    while (cin >> x && x >= 0) sum += x;
    cout << sum;
    return 0;
}
