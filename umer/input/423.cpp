#include <iostream>
using namespace std;

double sumNumbers(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum: " << sumNumbers(a, b) << endl;
    return 0;
}