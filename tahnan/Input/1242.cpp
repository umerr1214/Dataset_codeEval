#include <iostream>
using namespace std;

class Polygon {
private:
    int sides;
    int length[10];
public:
    Polygon(int s) 
    {
        sides = s;
        for(int i = 0; i < s; i++)
        {
            length[i] = 1;
        }
    }

    int perimeter() 
    {
        int p = 0;
        for(int i = 0; i < sides; i++)
        {
            p += length[i];
        }
        return p;
    }

    void display() 
    {
        for(int i = 0; i < sides; i++)
        {
            cout << length[i] << " ";
        }
        cout << endl;
    }
};

// SEMANTIC ERROR: wrongly inherits another unrelated class
class WrongPolygon : public Polygon {
public:
    WrongPolygon(int s) : Polygon(s) {}
};

int main() 
{
    WrongPolygon p(3);
    cout << "Perimeter: " << p.perimeter() << endl;
    p.display();
    return 0;
}
