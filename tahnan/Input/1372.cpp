#include <iostream>
#include <map>
using namespace std;

class Dictionary {
private:
    map<string,string> data;
public:
    void insert(string word,string meaning){data[word]=meaning;}
    void remove(string word){data.erase(word);} // robustness issue: no check if word exists
    void search(string word){
        if(data.find(word)!=data.end()) cout<<data[word]<<endl;
        else cout<<"Not found\n";
    }
    void display(){
        for(auto p:data) cout<<p.first<<":"<<p.second<<" ";
        cout<<endl;
    }
};

int main(){
    Dictionary d;
    d.insert("apple","fruit");
    d.insert("ball","toy");
    d.search("cat"); // edge case
    d.display();
    return 0;
}
