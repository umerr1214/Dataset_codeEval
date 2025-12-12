#include <iostream>
using namespace std;

void checkPrime(int num, bool isPrime) {
    if (num <= 1) {
        isPrime = false;
        return;
    }
    
    isPrime = true;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
}

int main() {
    int number = 17;
    bool result;
    
    cout << "Number: " << number << endl;
    checkPrime(number, result);
    cout << "Is Prime: " << (result ? "Yes" : "No") << endl;
    
    return 0;
}