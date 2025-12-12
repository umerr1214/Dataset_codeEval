#include <iostream>
using namespace std;
class Polygon{
    int sides[5],n;
public:
    Polygon(int x){
        n=x;
        for(int i=0;i<5;i++) sides[i]=0; // inefficient, initializes unused
    }
    void setSide(int i,int val){sides[i]=val;}
    int perimeter(){
        int p=0;
        for(int i=0;i<5;i++) p+=sides[i]; // loops over unused sides
        return p;
    }
    void display(){
        for(int i=0;i<5;i++)
            if(sides[i]!=0) cout<<sides[i]<<" ";
        cout<<endl;
    }
};
int main(){
    Polygon p(3);
    p.setSide(0,3); p.setSide(1,4); p.setSide(2,5);
    cout<<p.perimeter()<<endl;
    p.display();
    return 0;
}
