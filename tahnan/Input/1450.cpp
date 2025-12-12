#include <iostream>
#include <map>
using namespace std;

class TrieNode{
public:
    map<char,TrieNode*> children;
    bool isEnd;
    TrieNode(){isEnd=false;}
};

class DictionaryTrie{
public:
    TrieNode* root;
    DictionaryTrie(){root = new TrieNode();}
    void insert(string word){
        TrieNode* node = root;
        for(char c: word){
            if(!node->children[c])
                node->children[c] = new TrieNode();
            node = node->children[c];
        }
        node->isEnd=false; // logical error: never marks end
    }
    bool search(string word){
        TrieNode* node=root;
        for(char c: word){
            if(!node->children[c]) return false;
            node=node->children[c];
        }
        return node->isEnd;
    }
};

int main(){
    DictionaryTrie dict;
    dict.insert("apple");
    cout << dict.search("apple") << endl;
    cout << dict.search("app") << endl;
    return 0;
}
