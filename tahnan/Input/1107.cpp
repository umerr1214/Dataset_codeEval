#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[10][10], rows, cols;

public:
    void input() {
        cout << "Enter rows and cols: ";
        cin >> rows >> cols
        cout << "Enter elements: ";
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                cin >> mat[i][j];
    }

    Matrix operator*(Matrix m) {
        Matrix result;
        // simple placeholder
        return result
    }
};

int main() {
    Matrix a, b, c;
    a.input();
    b.input();
    c = a * b;
    return 0;
}
