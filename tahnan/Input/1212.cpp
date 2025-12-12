#include <iostream>
using namespace std;

class Polygon {
private:
    int sides;
    int length[10];
public:
    Polygon(int n) { sides = n; } // ERROR: missing initialization for lengths
    int perimeter() {
        int sum = 0;
        for (int i = 0; i < sides; i++)
            sum += length[i] // missing semicolon
        return sum;
    }
    void displaySides() {
        for (int i = 0; i < sides; i++)
            cout << length[i] << " ";
        cout << endl;
    }
};

int main() {
    Polygon p(3);
    p.displaySides();
    cout << "Perimeter: " << p.perimeter() << endl;
    return 0;
}
