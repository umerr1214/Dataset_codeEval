#include <iostream>
using namespace std;

int findMax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a = 10, b = 5;
    int maximum = findMax(a, b);
    cout << "Maximum: " << maximum << endl;
    return 0;
}