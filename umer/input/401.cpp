#include <iostream>
using namespace std;

void findMinMax(int a, int b, int& x, int& y) {
    x = (a < b) ? a : b;
    y = (a > b) ? a : b;
}

int main() {
    int i, j, k, l;
    
    cout << "Enter two integers: ";
    cin >> i >> j;
    
    findMinMax(i, j, k, l);
    
    cout << "Min: " << k << endl;
    cout << "Max: " << l << endl;
    
    return 0;
}