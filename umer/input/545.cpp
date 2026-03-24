#include <iostream>
#include <climits>
using namespace std;

int sumNumbers(int num1, int num2) {
    // Readability/Efficiency issue: unnecessary complexity and includes
    int temp1 = num1;
    int temp2 = num2;
    int result = 0;
    
    // Overly complex way to add two numbers
    for (int i = 0; i < temp2; i++) {
        result = result + 1;
    }
    for (int i = 0; i < temp1; i++) {
        result = result + 1;
    }
    
    return result;
}

int main() {
    int a = 5, b = 3;
    int result = sumNumbers(a, b);
    cout << "Sum: " << result << endl;
    return 0;
}