#include <iostream>
using namespace std;

class Matrix {
private:
    int a[2][2];

public:
    void input() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> a[i][j];
            }
        }
    }

    Matrix operator*(const Matrix& m) {
        Matrix result;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.a[i][j] = 0;
                for (int k = 0; k < 2; k++) {
                    result.a[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }
        return result;
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m1, m2, m3;
    m1.input();
    m2.input();
    m3 = m1 * m2;
    m3.display();
    return 0;
}
