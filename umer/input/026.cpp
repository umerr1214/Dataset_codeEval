#include <iostream>
using namespace std;

int main() {
    // Create an array to store CGPA of 10 students (Use proper data type)
    float* cgpaArray = new float[10];
    
    // Introduce a pointer and point to array base address
    float* ptr = cgpaArray;
    
    // Input values from user using pointer offset method
    cout << "Enter CGPA for 10 students:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> *(ptr + i);
    }
    
    // Display whole array using pointer offset method
    cout << "\nCGPA values:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student " << (i + 1) << ": " << *(ptr + i) << endl;
    }
    
    // ❌ LOGICAL ERROR: Wrong initialization and comparison logic
    float max = 0.0, min = 4.0, sum = 0.0;  // Wrong: max should start with first element, min too high
    for (int i = 0; i < 10; i++) {
        float current = *(ptr + i);
        if (current < max) max = current;  // Wrong: should be > for maximum
        if (current > min) min = current;  // Wrong: should be < for minimum
        sum += current;
    }
    float average = sum / 10.0;
    
    cout << "\nResults:" << endl;
    cout << "Maximum CGPA: " << max << endl;
    cout << "Minimum CGPA: " << min << endl;
    cout << "Average CGPA: " << average << endl;
    
    // Deallocate array properly
    delete[] cgpaArray;
    
    return 0;
}