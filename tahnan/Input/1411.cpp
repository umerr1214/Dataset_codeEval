#include <iostream>
#include <map>
using namespace std;

class Dictionary {
    map<string, string> d;
public:
    void insert(string w, string m) {
        d[w] = m;
    }
    
    void search(string w) {
        if(d.find(w) != d.end()) {
            cout << d[w] << endl;
        } else {
            cout << "NF" << endl;
        }
    }
    
    void remove(string w) {
        d.erase(w);
    }
    
    void display() {
        for(auto p : d) {
            cout << p.first << ":" << p.second << " ";
        }
        cout << endl;
    }
};

int main() {
    Dictionary dic;
    dic.insert("apple", "fruit");
    dic.insert("ball", "toy");
    dic.search("cat");
    dic.display();
    return 0;
}
