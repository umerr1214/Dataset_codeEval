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

int main() 
{
    Polygon p(12); // robustness issue: more sides than expected (array fixed size)
    cout << "Perimeter: " << p.perimeter() << endl;
    p.display();
    return 0;
}
