#include <iostream>
using namespace std;

void findMinMax(int a, int b, int minVal, int maxVal) {
    if (a < b) {
        minVal = a;
        maxVal = b;
    } else {
        minVal = b;
        maxVal = a;
    }
}

int main() {
    int num1 = 15, num2 = 8;
    int minimum, maximum;
    
    cout << "Numbers: " << num1 << " and " << num2 << endl;
    findMinMax(num1, num2, minimum, maximum);
    cout << "Minimum: " << minimum << ", Maximum: " << maximum << endl;
    
    return 0;
}