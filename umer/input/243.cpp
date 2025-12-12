#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;
    
    string max; // Semantic error: should be int, not string
    
    // Find maximum using nested if
    if (a > b) {
        if (a > c) {
            if (a > d) {
                max = a; // Type mismatch: assigning int to string
            } else {
                max = d;
            }
        } else {
            if (c > d) {
                max = c;
            } else {
                max = d;
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                max = b;
            } else {
                max = d;
            }
        } else {
            if (c > d) {
                max = c;
            } else {
                max = d;
            }
        }
    }
    
    cout << "Maximum: " << max << endl;
    
    return 0;
}