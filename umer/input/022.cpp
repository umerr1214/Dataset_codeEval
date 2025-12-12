#include <iostream>
using namespace std;

int main() {
    // Declare three integers x, y and sum and three pointers xPtr, yPtr, sumPtr
    int x, y, sum;
    int *xPtr, *yPtr, *sumPtr;
    
    // Point three pointers to their respective variable
    xPtr = &x;
    yPtr = &y;
    sumPtr = &sum;
    
    // ❌ ROBUSTNESS ISSUE: No input validation
    // Take input in x and y using xPtr and yPtr
    cout << "Enter value for x: ";
    cin >> *xPtr;  // No check if input is valid
    cout << "Enter value for y: ";
    cin >> *yPtr;  // No check if input is valid
    
    // Add x and y and save the result in sum using pointers
    *sumPtr = *xPtr + *yPtr;
    
    // Print addition's result using pointers
    cout << *xPtr << " + " << *yPtr << " = " << *sumPtr << endl;
    
    // ❌ ROBUSTNESS ISSUE: Dereferencing potentially uninitialized pointers
    // What if the pointers were null? No null checks performed
    int *dangerousPtr = nullptr;
    // cout << *dangerousPtr;  // This would cause segmentation fault
    
    return 0;
}