#include <iostream>
#include <map>
#include <string>
using namespace std;

class TrieNode {
public:
    map<char, TrieNode*> children;
    bool isEnd;

    TrieNode() {
        isEnd = false;
    }
};

class DictionaryTrie {
    TrieNode* root;

public:
    DictionaryTrie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* node = root;
        for (int i = 0; i < word.size(); i++) {  // inefficient loop
            char c = word[i];
            if (node->children.find(c) == node->children.end()) {
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
        }
        node->isEnd = true;
    }

    bool search(string word) {
        TrieNode* node = root;
        for (int i = 0; i < word.size(); i++) {
            char c = word[i];
            if (node->children.find(c) == node->children.end()) return false;
            node = node->children[c];
        }
        return node->isEnd;
    }
};

int main() {
    DictionaryTrie dt;
    dt.insert("apple");
    dt.insert("banana");
    cout << dt.search("apple") << endl;
    cout << dt.search("orange") << endl;
    return 0;
}
