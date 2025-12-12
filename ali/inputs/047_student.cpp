#include <iostream>
using namespace std;
int main() {
    int n = 5, sum = 0;
    int arr[5] = {1,2,3,4,5};
    for(int i = 0; i <= n; i++)
        sum += arr[i];
    cout << sum / n;
    return 0;
}
