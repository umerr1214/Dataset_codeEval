#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    // Prompt user for input
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    int gcd;
    
    // Find GCD using Euclidean algorithm
    // The algorithm works by repeatedly replacing the larger number
    // with the remainder of the division of the larger by the smaller
    while (b != 0) {
        int temp = b;    // Store b temporarily
        b = a % b;       // Replace b with remainder of a divided by b
        a = temp;        // Replace a with the old value of b
    }
    
    // When b becomes 0, a contains the GCD
    gcd = a;
    
    // Display the result
    cout << "GCD is: " << gcd << endl;
    
    return 0;
}