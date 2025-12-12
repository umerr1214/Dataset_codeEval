#include <iostream>
using namespace std;

class Vector3D {
public:
    double x,y,z;
    Vector3D(double a, double b, double c) {
        x=a;
        y=b
        z=c;
    }
    Vector3D operator+(Vector3D v) {
        return Vector3D(x+v.x, y+v.y, z+v.z)
    }
    Vector3D operator-(Vector3D v) {
        return Vector3D(x-v.x, y-v.y, z-v.z);
    }
    Vector3D operator*(Vector3D v) {
        return Vector3D(y*v.z - z*v.y, z*v.x - x*v.z, x*v.y - y*v.x);
    }
};

int main() {
    Vector3D a(1,2,3), b(4,5,6);
    Vector3D c = a + b;
    cout << c.x << " " << c.y << " " << c.z << endl;
    return 0;
}
