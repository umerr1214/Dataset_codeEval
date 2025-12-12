#include <iostream>
#include <map>
#include <string>
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
        TrieNode* node = root;
        for(char c : word) {
            if(node->children[c] == nullptr)
                node->children[c] = new TrieNode();
            node = node->children[c];
        }
        node->isWord = true;
    }

    bool search(string word) {
        // Robustness issue: does not check null before access
        TrieNode* node = root;
        for(char c : word) node = node->children[c];
        return node->isWord;
    }
};

int main() {
    DictionaryTrie dict;
    dict.insert("apple");
    cout << (dict.search("apple") ? "Found" : "Not Found") << endl;
    return 0;
}
