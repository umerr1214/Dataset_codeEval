#include <iostream>
using namespace std;

int main() {
    // Declare three integers x, y and sum and three pointers xPtr, yPtr, sumPtr
    int x, y, sum;
    int *xPtr, *yPtr, *sumPtr;
    
    // ❌ SEMANTIC ERROR: Wrong pointer assignments (type mismatch)
    xPtr = &y;     // Should be &x
    yPtr = &x;     // Should be &y
    sumPtr = &sum; // This one is correct
    
    // Take input in x and y using xPtr and yPtr (but pointers are swapped)
    cout << "Enter value for x: ";
    cin >> *xPtr;  // This actually inputs to y
    cout << "Enter value for y: ";
    cin >> *yPtr;  // This actually inputs to x
    
    // Add x and y and save the result in sum using pointers
    *sumPtr = *xPtr + *yPtr;
    
    // Print addition's result using pointers
    cout << *xPtr << " + " << *yPtr << " = " << *sumPtr << endl;
    
    return 0;
}