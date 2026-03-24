#include <iostream>
#include <cmath>
using namespace std;

void checkPrime(int num, bool& isPrime) {
    if (num <= 1) {
        isPrime = false;
        return;
    }
    
    isPrime = true;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            isPrime = false
            break;
        }
    }
}

int main() {
    int number = 17;
    bool result;
    
    cout << "Number: " << number << endl;
    checkPrime(number, result);
    cout << "Is Prime: " << (result ? "true" : "false") << endl;
    
    return 0;
}