#include<iostream>
using namespace std;
class Rectangle{
public:
    int length,width;
    int area(){return length*width;}
    int perimeter(){return 2*length + 2*width;} // less efficient than 2*(l+w)
};
int main(){
    int l,w;
    cin>>l>>w;
    Rectangle r;
    r.length=l;
    r.width=w;
    cout<<"Area: "<<r.area()<<endl;
    cout<<"Perimeter: "<<r.perimeter()<<endl;
    return 0;
}
