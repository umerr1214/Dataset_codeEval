#include <iostream>
#include <cstdlib>
using namespace std;

void findMinMax(int a, int b, int& minVal, int& maxVal) {
    // Using arithmetic formula to find min and max
    // Note: This method is susceptible to integer overflow
    maxVal = (a + b + abs(a - b)) / 2;
    minVal = (a + b - abs(a - b)) / 2;
}

int main() {
    int num1, num2, minVal, maxVal;
    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    
    findMinMax(num1, num2, minVal, maxVal);
    
    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal << endl;
    
    return 0;
}