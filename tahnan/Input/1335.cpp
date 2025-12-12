#include <iostream>
#include <map>
using namespace std;

class Dictionary {
private:
    map<string,string> data;

public:
    void insert(string word, string meaning) {
        data[word] = meaning;
    }

    void deleteWord(string word) {
        // Logical error: uses wrong function name
        data.erase(meaning);
    }

    void display() {
        for(auto &p:data)
            cout << p.first << ": " << p.second << endl;
    }
};

int main() {
    Dictionary dict;
    dict.insert("Apple","Fruit");
    dict.insert("Book","Object");
    dict.deleteWord("Book");
    dict.display();
    return 0;
}
