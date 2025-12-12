#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 1 + n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0) sum += i;
    }
    if(n==0) sum=0;
    cout << sum << endl;
    return 0;
}
