#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, sum = 0, temp, r;
    cin >> n;
    temp = n
    while(n > 0) {
        r = n % 10;
        sum += pow(r, 3)
        n /= 10;
    if(sum == temp)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";
    return 0;
}
