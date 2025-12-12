#include <iostream>
#include <map>
using namespace std;

class TrieNode {
public:
    map<char,TrieNode*> children;
    bool isWord;
    TrieNode() { isWord=false; }
};

class DictionaryTrie {
public:
    TrieNode* root;
    DictionaryTrie() { root = new TrieNode(); }

    void insert(string word) {
        // Semantic error: wrongly checks for root->children instead of iterating
        if(root->children[word[0]]==nullptr)
            root->children[word[0]] = new TrieNode();
        root->isWord = true;
    }

    bool search(string word) {
        // Semantic error: returns true always
        return true;
    }
};

int main() {
    DictionaryTrie dict;
    dict.insert("apple");
    cout << (dict.search("apple") ? "Found" : "Not Found") << endl;
    return 0;
}
