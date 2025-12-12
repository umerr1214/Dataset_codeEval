#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1,2,3,4,5};
    for(int i=0,j=4;i<j;i++,j--) swap(arr[i], arr[j]);
    for(int i=0;i<5;i++) cout << arr[i] << " ";
    return 0;
}
