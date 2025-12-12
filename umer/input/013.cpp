#include <iostream>
using namespace std;

int main() {
    // 1. Introduce 2 variables i (int), j (float) and initialize to 5, 1.5 respectively.
    int i = 5;
    float j = 1.5  // ❌ SYNTAX ERROR: Missing semicolon

    // 2. Introduce 2 variables xPtr (int*), yPtr (float*) and assign address of i, j respectively.
    int* xPtr = &i;
    float* yPtr = &j;

    // 3. Print values of i, j and addresses in xPtr, yPtr.
    cout << "Values: i = " << i << ", j = " << j << endl;
    cout << "Addresses: xPtr = " << xPtr << ", yPtr = " << yPtr << endl;

    // 4. xPtr ++; yPtr ++;
    xPtr++;
    yPtr++;

    // 5. Print addresses in xPtr,yPtr.
    cout << "After increment: xPtr = " << xPtr << ", yPtr = " << yPtr << endl;

    // 6. xPtr --; yPtr --;
    xPtr--;
    yPtr--;

    // 7. Print addresses in xPtr, yPtr.
    cout << "After decrement: xPtr = " << xPtr << ", yPtr = " << yPtr << endl;

    // 8. xPtr = xPtr + 3; yPtr = yPtr + 4;
    xPtr = xPtr + 3;
    yPtr = yPtr + 4;

    // 9. Print addresses in xPtr, yPtr.
    cout << "After addition: xPtr = " << xPtr << ", yPtr = " << yPtr << endl;

    return 0;
}