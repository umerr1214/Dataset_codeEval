#include <iostream>
using namespace std;
int main() {
    int arr[3] = {1, 2, 3};
    int sum = arr[0];
    for(int i = 1; i <= 3; i++)
        sum += arr[i];
    cout << sum;
    return 0;
}
