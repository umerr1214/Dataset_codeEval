#include <iostream>
using namespace std;

class Matrix {
    int mat[2][2];
public:
    void input() {
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++) cin >> mat[i][j];
    }
    Matrix operator*(Matrix m) {
        Matrix res;
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++){
                res.mat[i][j]=0;
                for(int k=0;k<2;k++) res.mat[i][j]+=mat[i][k]*m.mat[k][j];
            }
        return res;
    }
    void display() {
        for(int i=0;i<2;i++){ for(int j=0;j<2;j++) cout<<mat[i][j]<<" "; cout<<endl; }
    }
};

int main() {
    Matrix a,b,c;
    a.input(); b.input();
    c = a*b;
    c.display();
    return 0;
}
