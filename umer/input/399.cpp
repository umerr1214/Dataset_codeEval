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
    int num1, num2, minVal = 0, maxVal = 0;
    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    
    findMinMax(num1, num2, minVal, maxVal);
    
    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal << endl;
    
    return 0;
}