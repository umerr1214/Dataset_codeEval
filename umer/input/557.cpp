#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int findMax(int num1, int num2) {
    // Readability/Efficiency issue: unnecessary complexity and includes
    int temp1 = num1;
    int temp2 = num2;
    int result;
    
    // Overly complex way to find maximum using unnecessary steps
    int arr[2] = {temp1, temp2};
    result = arr[0];
    for (int i = 1; i < 2; i++) {
        if (arr[i] > result) {
            result = arr[i];
        }
    }
    
    return result;
}

int main() {
    int a = 10, b = 5;
    int maximum = findMax(a, b);
    cout << "Maximum: " << maximum << endl;
    return 0;
}