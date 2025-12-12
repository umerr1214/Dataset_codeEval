#include <iostream>
#include <vector>
#include <string>
using namespace std;class EBook{public:string t;EBook(string x){t=x;}};class OnlineLibrary{public:vector<EBook> e;void borrow(string x){e.push_back(EBook(x));}void show(){for(auto &i:e)cout<<i.t<<" ";}};int main(){OnlineLibrary l;l.borrow("Book1");l.borrow("Book2");l.show();}
