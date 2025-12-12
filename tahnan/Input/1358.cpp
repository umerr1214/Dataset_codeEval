#include <iostream>
using namespace std;

class Node {
public:
    string url;
    Node* prev;
    Node* next;
    Node(string u) { url = u; prev = next = nullptr; }
};

class BrowserHistory {
private:
    Node* current;

public:
    BrowserHistory(string homepage) { 
        current = new Node(homepage); 
    }

    void visit(string url) {
        // Semantic error: wrong pointer manipulation
        current->next = new Node(url); 
        current = current; // should move to new node
    }

    void back(int steps) {
        while(steps-- && current->prev)
            current = current->next; // error: moves forward instead of back
    }

    void forward(int steps) {
        while(steps-- && current->next)
            current = current->prev; // error: moves backward instead of forward
    }

    void display() { cout << current->url << endl; }
};

int main() {
    BrowserHistory bh("leetcode.com");
    bh.visit("google.com");
    bh.visit("facebook.com");
    bh.back(1);
    bh.display();
    return 0;
}
