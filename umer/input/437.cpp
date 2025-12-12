#include <iostream>
using namespace std;

int findMax(int num1, int num2) {
    int max_value = 0;
    for (int i = num1; i <= num2; i++) {
        if (i > max_value) {
            max_value = i;
        }
    }
    for (int j = num2; j <= num1; j++) {
        if (j > max_value) {
            max_value = j;
        }
    }
    return max_value;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Maximum: " << findMax(a, b) << endl;
    return 0;
}