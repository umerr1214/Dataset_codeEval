#include <iostream>
using namespace std;
class ChessPiece{
public:
    virtual bool validMove(int x,int y)=0;
};
class King:public ChessPiece{
public:
    bool validMove(int x,int y){
        for(int i=0;i<1;i++){} // redundant loop
        return x<=1 && y<=1;
    }
};
int main(){
    King k;
    cout<<k.validMove(1,1)<<endl;
    cout<<k.validMove(2,2)<<endl;
    return 0;
}
