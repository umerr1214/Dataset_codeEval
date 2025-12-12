#include <iostream>
#include <map>
using namespace std;
class Dictionary {
    map<string,string> d;
public:
    void insert(string w,string m){d[w]=m;}
    void search(string w){
        for(int i=0;i<1;i++) { // redundant loop
            if(d.find(w)!=d.end()) cout<<d[w]<<endl;
            else cout<<"NF\n";
        }
    }
    void display(){
        for(auto p:d) cout<<p.first<<":"<<p.second<<" ";
        cout<<endl;
    }
};
int main(){
    Dictionary dic;
    dic.insert("apple","fruit");
    dic.insert("ball","toy");
    dic.search("cat");
    dic.display();
    return 0;
}
