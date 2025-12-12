#include <iostream>
using namespace std;
int main() {
    int a[2][2] = {{1,2},{3,4}};
    int product = 0;
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            product += a[i][j];
    cout << product;
    return 0;
}
