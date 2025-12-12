#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[2][2];

public:
    void input() {
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                cin >> mat[i][j];
    }

    void display() {
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }

    Matrix operator*(Matrix m) {
        Matrix result;
        // Logical error: adds instead of multiplies
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                result.mat[i][j] = mat[i][j] + m.mat[i][j];
        return result;
    }
};

int main() {
    Matrix a, b, c;
    a.input();
    b.input();
    c = a * b;
    c.display();
    return 0;
}
