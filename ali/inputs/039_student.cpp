#include <iostream>
using namespace std;
int main() {
    int n = 7, flag = 1;
    for(int i = 2; i <= n/2; i++)
        if(n % i == 0)
            flag = 1;
    if(flag == 0)
        cout << "Prime";
    else
        cout << "Not Prime";
    return 0;
}
