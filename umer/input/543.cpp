#include <iostream>
using namespace std;

double sumNumbers(int num1, int num2) {  // Semantic error: wrong return type
    return num1 + num2;
}

int main() {
    int a = 5, b = 3;
    int result = sumNumbers(a, b);
    cout << "Sum: " << result << endl;
    return 0;
}