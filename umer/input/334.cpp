#include <iostream>
using namespace std;

void printDiagonal() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    
    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            while (num % 3 == 0) {
                num++;
            }
            cout << num << endl;
            num++;
        }
        cout << endl;
    }
}

int main() {
    printDiagonal();
    return 0;
}