#include <iostream>
using namespace std;

int main() {
    // ❌ SEMANTIC ERROR: Wrong data type for CGPA (should be float, not int)
    int* cgpaArray = new int[10];  // Should be float* for CGPA values
    
    // Introduce a pointer and point to array base address
    int* ptr = cgpaArray;  // Should be float* to match the data type
    
    // Input values from user using pointer offset method
    cout << "Enter CGPA for 10 students:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> *(ptr + i);  // This will truncate decimal values
    }
    
    // Display whole array using pointer offset method
    cout << "\nCGPA values:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student " << (i + 1) << ": " << *(ptr + i) << endl;
    }
    
    // Find maximum, minimum and average CGPA
    int max = *ptr, min = *ptr, sum = 0;  // Should be float for proper calculations
    for (int i = 0; i < 10; i++) {
        int current = *(ptr + i);  // Should be float
        if (current > max) max = current;
        if (current < min) min = current;
        sum += current;
    }
    float average = sum / 10.0;  // Integer division will cause precision loss
    
    cout << "\nResults:" << endl;
    cout << "Maximum CGPA: " << max << endl;
    cout << "Minimum CGPA: " << min << endl;
    cout << "Average CGPA: " << average << endl;
    
    // Deallocate array properly
    delete[] cgpaArray;
    
    return 0;
}