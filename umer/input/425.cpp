#include <iostream>
using namespace std;

int sumNumbers(int num1, int num2) {
    int result = 0;
    for (int i = 0; i < num1; i++) {
        result++;
    }
    for (int j = 0; j < num2; j++) {
        result++;
    }
    return result;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum: " << sumNumbers(a, b) << endl;
    return 0;
}