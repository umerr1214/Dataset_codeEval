#include <iostream>
using namespace std;

double findMax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Maximum: " << findMax(a, b) << endl;
    return 0;
}