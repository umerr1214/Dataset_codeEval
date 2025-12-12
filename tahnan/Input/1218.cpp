#include <iostream>
using namespace std;

class Polynomial {
private:
    int coeff[5];
public:
    void input() { for(int i=0; i<5; i++) cin >> coeff[i] } // missing semicolon
    void display() { for(int i=0; i<5; i++) cout << coeff[i] << " "; cout << endl; }
};

int main() {
    Polynomial p;
    p.input();
    p.display();
    return 0;
}
