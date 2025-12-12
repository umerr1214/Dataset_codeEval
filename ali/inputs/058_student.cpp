#include <iostream>
using namespace std;
int main() {
    int sum = 0, count = 0, x;
    while (cin >> x) {
        sum += x;
        count++;
    }
    cout << sum / count;
    return 0;
}
