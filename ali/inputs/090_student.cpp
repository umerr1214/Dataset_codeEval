#include <iostream>
using namespace std;
int main() {
    int mat[2][2] = {{1,2},{3,4}};
    int sum = 0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum = 0;
            for(int x=0;x<=i;x++){
                for(int y=0;y<=j;y++){
                    sum += mat[x][y];
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}
