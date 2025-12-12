#include <iostream>
using namespace std;

class ChessPiece {
public:
    virtual bool validMove(int x,int y) = 0;
};

class King: public ChessPiece {
public:
    bool validMove(int x,int y) {
        // Semantic error: wrong inheritance usage
        return x <= 2 && y <= 2; // should check 1 unit only
    }
};

int main() {
    King k;
    cout << k.validMove(1,1) << endl;
    return 0;
}
