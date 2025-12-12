#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int binary[32], i = 0;
    while(n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    for(int j = 0; j <= i; j++)
        cout << binary[j];
    return 0;
}
