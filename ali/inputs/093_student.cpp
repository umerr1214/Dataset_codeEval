#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n<=1){cout<<"Not Prime\n"; return 0;}
    bool isPrime = true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){isPrime=false; break;}
    }
    cout << (isPrime ? "Prime\n" : "Not Prime\n");
    return 0;
}
