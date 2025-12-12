#include <iostream>
using namespace std;
int main() {
    int arr[4] = {10, 5, 2, 8};
    int min = arr[0];
    for(int i = 1; i < 4; i++)
        if(arr[i] > min)
            min = arr[i];
    cout << min;
    return 0;
}
