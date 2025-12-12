#include <iostream>
using namespace std;

class ChessPiece {
public:
    virtual bool validMove(int x,int y) = 0;
};

class King: public ChessPiece {
public:
    bool validMove(int x,int y) {
        // Robustness issue: no check for negative positions
        return x>=0 && x<=1 && y>=0 && y<=1;
    }
};

int main() {
    King k;
    cout << k.validMove(1,1) << endl;
    cout << k.validMove(-1,0) << endl; // edge case
    return 0;
}
