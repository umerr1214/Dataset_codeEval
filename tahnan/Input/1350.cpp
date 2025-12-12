#include <iostream>
#include <map>
using namespace std;

class Dictionary {
private:
    map<string,string> data;

public:
    void insert(string word, string meaning) { data[word] = meaning; }

    void deleteWord(string word) {
        // Semantic error: tries to erase a map using wrong type
        data.erase(word + " "); // wrong key type
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
