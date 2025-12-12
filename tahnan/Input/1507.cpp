#include <iostream>
using namespace std;

class Vector3D {
public:
    double x, y, z;

    Vector3D(double a, double b, double c) {
        x = a;
        y = b;
        z = c;
    }

    Vector3D operator+(Vector3D v) {
        Vector3D result(0,0,0);
        result.x = x + v.x;
        result.y = y + v.y;
        result.z = z + v.z;
        return result;
    }

    Vector3D operator-(Vector3D v) {
        Vector3D result(0,0,0);
        result.x = x - v.x;
        result.y = y - v.y;
        result.z = z - v.z;
        return result;
    }

    Vector3D operator*(Vector3D v) {
        Vector3D result(0,0,0);
        result.x = y*v.z - z*v.y;
        result.y = z*v.x - x*v.z;
        result.z = x*v.y - y*v.x;
        return result;
    }

    void print() {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Vector3D v1(1,2,3);
    Vector3D v2(4,5,6);
    Vector3D v3 = v1 + v2;
    Vector3D v4 = v1 * v2;
    v3.print();
    v4.print();
    return 0;
}
