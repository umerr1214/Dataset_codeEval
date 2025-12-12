#include <iostream>
#include <map>
#include <string>
using namespace std;

class TrieNode {
public:
    map<char, TrieNode*> children;
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
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
        for (int i = 0; i < word.size(); i++) {
            char c = word[i];
            if (node->children.find(c) == node->children.end()) {
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
        }
        node->isEndOfWord = true;
    }

    bool search(string word) {
        TrieNode* node = root;
        for (int i = 0; i < word.size(); i++) {
            char c = word[i];
            if (node->children.find(c) == node->children.end()) {
                return false;
            }
            node = node->children[c];
        }
        return node->isEndOfWord;
    }
};

int main() {
    DictionaryTrie dict;
    dict.insert("hello");
    dict.insert("world");
    cout << dict.search("hello") << endl;
    cout << dict.search("world") << endl;
    cout << dict.search("hi") << endl;
    return 0;
}
