#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int count = 0;
    for(int i=2;i<=n;i++){
        bool prime = true;
        for(int j=2;j<i;j++){
            if(i%j==0) prime=false;
        }
        if(prime) count++;
    }
    cout << count << endl;
    return 0;
}
