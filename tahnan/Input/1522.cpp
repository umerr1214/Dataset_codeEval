#include <iostream>
using namespace std;

class Vector3D {
public:
    double x, y, z;

    Vector3D(double a, double b, double c) {
        x = a; y = b; z = c;
    }

    Vector3D operator+(const Vector3D& v) {
        return Vector3D(x + v.x, y + v.y, z + v.z);
    }

    Vector3D operator-(const Vector3D& v) {
        return Vector3D(x - v.x, y - v.y, z - v.z);
    }

    Vector3D operator*(const Vector3D& v) {
        return Vector3D(y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x);
    }

    void display() {
        cout << "(" << x << "," << y << "," << z << ")" << endl;
    }
};

int main() {
    Vector3D v1(1,2,3);
    Vector3D v2(4,5,6);
    Vector3D v3 = v1 + v2;
    Vector3D v4 = v1 - v2;
    Vector3D v5 = v1 * v2;
    v3.display();
    v4.display();
    v5.display();
    return 0;
}
