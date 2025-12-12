#include <iostream>
using namespace std;

int main() {
    // Create an array to store CGPA of 10 students (Use proper data type)
    float* cgpaArray = new float[10];
    
    // Introduce a pointer and point to array base address
    float* ptr = cgpaArray;
    
    // ❌ ROBUSTNESS ISSUE: No input validation
    // Input values from user using pointer offset method
    cout << "Enter CGPA for 10 students:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> *(ptr + i);  // No validation for CGPA range (0.0-4.0) or input failure
    }
    
    // Display whole array using pointer offset method
    cout << "\nCGPA values:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student " << (i + 1) << ": " << *(ptr + i) << endl;
    }
    
    // Find maximum, minimum and average CGPA
    float max = *ptr, min = *ptr, sum = 0.0;
    for (int i = 0; i < 10; i++) {
        float current = *(ptr + i);
        if (current > max) max = current;
        if (current < min) min = current;
        sum += current;
    }
    float average = sum / 10.0;
    
    cout << "\nResults:" << endl;
    cout << "Maximum CGPA: " << max << endl;
    cout << "Minimum CGPA: " << min << endl;
    cout << "Average CGPA: " << average << endl;
    
    // ❌ ROBUSTNESS ISSUE: No null pointer check before deallocation
    delete[] cgpaArray;  // What if allocation failed? No check performed
    
    // ❌ ROBUSTNESS ISSUE: Potential memory leak if exception occurs
    // No exception handling for dynamic memory allocation
    
    return 0;
}