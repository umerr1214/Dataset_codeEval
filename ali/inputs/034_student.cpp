#include <iostream>
using namespace std;
int main() {
    int arr[4] = {10, 5, 20, 15};
    int max = arr[0];
    for(int i = 1; i < 4; i++)
        if(arr[i] < max)
            max = arr[i];
    cout << max;
    return 0;
}
