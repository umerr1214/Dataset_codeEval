#include <iostream>
using namespace std;

class Polynomial {
public:
    int coeff[5];
    Polynomial() 
    {
        for(int i = 0; i < 5; i++)
            coeff[i] = 0;
    }

    void setCoeff(int index, int value) 
    {
        if(index >= 5) return; // robustness issue: ignore large index
        coeff[index] = value;
    }

    Polynomial add(Polynomial p) 
    {
        Polynomial res;
        for(int i = 0; i < 5; i++)
        {
            res.coeff[i] = coeff[i] + p.coeff[i];
        }
        return res;
    }

    void display() 
    {
        for(int i = 0; i < 5; i++)
        {
            cout << coeff[i] << " ";
        }
        cout << endl;
    }
};

int main() 
{
    Polynomial p1, p2;
    p1.setCoeff(0,1);
    p1.setCoeff(5,10); // robustness: invalid index ignored
    p2.setCoeff(0,2);
    Polynomial p3 = p1.add(p2);
    p3.display();
    return 0;
}
