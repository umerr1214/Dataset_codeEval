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
    
    // Take input in x and y using xPtr and yPtr (no direct references)
    cout << "Enter value for x: ";
    cin >> *xPtr;
    cout << "Enter value for y: ";
    cin >> *yPtr;
    
    // Add x and y and save the result in sum using pointers (no direct references)
    *sumPtr = *xPtr + *yPtr;
    
    // Print addition's result using pointers (no direct references)
    cout << *xPtr << " + " << *yPtr << " = " << *sumPtr << endl;
    
    return 0;
}