#include <iostream>
using namespace std;

class ChessPiece {
public:
    virtual bool validMove(int x,int y) = 0;
};

class King: public ChessPiece {
public:
    bool validMove(int x,int y) {
        return x < 1 && y < 1; // Logical error: should be <=1
    }
};

int main() {
    King k;
    cout << k.validMove(1,1) << endl;
    return 0;
}
