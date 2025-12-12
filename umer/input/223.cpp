#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x = 10, y = 15, w = 250, score = 55, age = 25, p = 20, q = 30, year = 2024;
    double z = 170.0;
    char ch = 'A';
    double hit = 5.2, target = 0.0;
    
    // 1. x is even and y is odd
    bool expr1 = (x % 2 == 0) && (y % 2 == 1);
    
    // 3. x is not between -47.5 and 132.0
    bool expr3 = !(x >= -47.5 && x <= 132.0);
    
    // 4. w is more than 200, and one or more conditions
    bool expr4 = (w > 200) && ((x < 98.6) || (y < 60.0) || (z > 160.0));
    
    // 5. score is between 50 and 60 inclusive
    bool expr5 = (score >= 50) && (score <= 60);
    
    // 6. age is outside the range p to q
    bool expr6 = (age < p) || (age > q);
    
    // 7. at least one of x and y value is odd
    bool expr7 = (x % 2 == 1) || (y % 2 == 1);
    
    // 8. the hit is not more than 6.7 units away from target
    bool expr8 = abs(hit - target) <= 6.7;
    
    // 9. ch is an uppercase alphabetic character
    bool expr9 = (ch >= 'A') && (ch <= 'Z');
    
    // 10. year is divisible by 4
    bool expr10 = (year % 4 == 0);
    
    // 11. w is either equal to 6 or not greater than 3
    bool expr11 = (w == 6) || (w <= 3)  // Missing semicolon - syntax error
    
    cout << "Expression results:" << endl;
    cout << "1: " << expr1 << endl;
    cout << "3: " << expr3 << endl;
    cout << "4: " << expr4 << endl;
    cout << "5: " << expr5 << endl;
    cout << "6: " << expr6 << endl;
    cout << "7: " << expr7 << endl;
    cout << "8: " << expr8 << endl;
    cout << "9: " << expr9 << endl;
    cout << "10: " << expr10 << endl;
    cout << "11: " << expr11 << endl;
    
    return 0;
}