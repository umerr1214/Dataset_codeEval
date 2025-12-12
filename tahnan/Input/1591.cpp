#include <iostream>
#include <vector>
#include <string>
using namespace std;class Item{public:string n,d;Item(string x,string y){n=x;d=y;}};class SmartFridge{public:vector<Item> i;void add(string n,string d){i.push_back(Item(n,d));}void show(){for(auto &x:i)cout<<x.n<<" "<<x.d<<" ";}};int main(){SmartFridge f;f.add("Milk","2025-01-01");f.add("Eggs","2024-12-01");f.show();}
