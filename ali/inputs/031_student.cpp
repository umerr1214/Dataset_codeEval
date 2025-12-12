#include <iostream>
using namespace std;
int main() {
    int r = 2, c = 2;
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{5,6},{7,8}};
    int sum[2][2];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            sum[i][j] = a[i][j] - b[i][j];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
    return 0;
}
