#include <iostream>
using namespace std;

class ChessPiece {
public:
    virtual bool validMove(int x, int y) = 0;
};

class King : public ChessPiece {
public:
    bool validMove(int x, int y) {
        if(x <= 1 && y <= 1) {
            return true;
        }
        return false;
    }
};

class Queen : public ChessPiece {
public:
    bool validMove(int x, int y) {
        if(x == y || x == 0 || y == 0) {
            return true;
        }
        return false;
    }
};

int main() {
    King k;
    cout << k.validMove(1, 1) << endl;
    cout << k.validMove(2, 2) << endl;
    return 0;
}
