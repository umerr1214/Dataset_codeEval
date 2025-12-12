#include <iostream>
using namespace std;

int main() {
    cout << "Armstrong numbers between 1 and 500:" << endl;
    
    for (int i = 1; i <= 500; i++) {
        int num = i;
        int sum = 0;
        
        // Calculate sum of cubes of digits
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }
        
        // Check if it's an Armstrong number
        if (sum == i) {
            cout << i << " ";
        }
    }
    
    cout << endl  // Missing semicolon - syntax error
    
    return 0;
}