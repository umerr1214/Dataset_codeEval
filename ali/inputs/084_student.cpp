#include <iostream>
using namespace std;
int main() {
    int arr[5] = {5,3,1,4,2};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[j]>arr[j+1]){
                int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t;
            }
        }
    }
    for(int i=0;i<5;i++) cout << arr[i] << " ";
    return 0;
}
