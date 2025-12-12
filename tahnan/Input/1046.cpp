#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;
    void calculateArea() { cout << "Area: " << length * width << endl; }
    void calculatePerimeter() { cout << "Perimeter: " << 2*(length+width) << endl; }
};

int main() {
    Rectangle r;
    cin >> r.length >> r.width;
    if(r.length<=0 || r.width<=0) cout << "Invalid input\n";
    else {
        r.calculateArea();
        r.calculatePerimeter();
    }
    return 0;
}
