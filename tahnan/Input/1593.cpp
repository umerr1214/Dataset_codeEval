#include <iostream>
#include <vector>
#include <string>
using namespace std;class Book{public:string t,a;double p;Book(string x,string y,double z){t=x;a=y;p=z;}};class BookStore{public:vector<Book> b;void add(string x,string y,double z){b.push_back(Book(x,y,z));}void show(){for(auto &i:b)cout<<i.t<<" "<<i.a<<" "<<i.p<<" ";}};int main(){BookStore bs;bs.add("C++","Bjarne",50);bs.add("Python","Guido",45);bs.show();}
