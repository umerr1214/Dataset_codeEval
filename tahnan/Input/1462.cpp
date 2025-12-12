#include <iostream>
using namespace std;

class Vector3D {
public:
    double x, y, z;
    Vector3D(double a, double b, double c) { x=a; y=b; z=c; }

    // Semantic error: operator * wrongly implemented (cross product incorrect)
    Vector3D operator*(const Vector3D& v) {
        return Vector3D(x*v.x, y*v.y, z*v.z);
    }

    void display() { cout << "(" << x << "," << y << "," << z << ")" << endl; }
};

int main() {
    Vector3D v1(1,2,3);
    Vector3D v2(4,5,6);
    Vector3D v3 = v1*v2;
    v3.display();
    return 0;
}
