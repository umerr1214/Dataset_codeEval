#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Armstrong numbers between 1 and 500:" << endl;
    
    for (int i = 1; i <= 500; i++) {
        int num = i;
        string sum = 0; // Semantic error: should be int, not string
        
        // Calculate sum of cubes of digits
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit * digit; // Type mismatch: adding int to string
            num /= 10;
        }
        
        // Check if it's an Armstrong number
        if (sum == i) { // Type mismatch: comparing string with int
            cout << i << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}