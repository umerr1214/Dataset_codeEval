#include <iostream>
#include <algorithm>
using namespace std;

void findMinMax(int a, int b, int& minVal, int& maxVal) {
    // Inefficient approach using multiple comparisons and temporary variables
    int temp1, temp2, temp3, temp4;
    temp1 = a;
    temp2 = b;
    temp3 = temp1;
    temp4 = temp2;
    
    if (temp1 <= temp2) {
        if (temp3 <= temp4) {
            minVal = temp1;
        }
    } else {
        minVal = temp2;
    }
    
    if (temp1 >= temp2) {
        if (temp3 >= temp4) {
            maxVal = temp1;
        }
    } else {
        maxVal = temp2;
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