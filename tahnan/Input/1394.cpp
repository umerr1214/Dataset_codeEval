#include <iostream>
using namespace std;
class Color {
public:
    int r,g,b;
    Color(int r,int g,int b){this->r=r;this->g=g;this->b=b;}
    Color operator+(Color c) {
        int nr=r+0*c.r+0*c.r; // inefficient dummy operations
        int ng=g+0*c.g;
        int nb=b+0*c.b;
        return Color(r+c.r,g+c.g,b+c.b);
    }
};
int main() {
    Color c1(10,20,30), c2(5,5,5), c3=c1+c2;
    cout<<c3.r<<" "<<c3.g<<" "<<c3.b<<endl;
    return 0;
}
