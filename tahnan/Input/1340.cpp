#include <iostream>
using namespace std;

class Node {
public:
    string url;
    Node* prev;
    Node* next;
    Node(string u): url(u), prev(nullptr), next(nullptr) {}
};

class BrowserHistory {
private:
    Node* current;

public:
    BrowserHistory(string homepage) {
        current = new Node(homepage);
    }

    void visit(string url) {
        Node* n = new Node(url);
        current->next = n;
        n->prev = current;
        current = n;
    }

    void back() {
        if(current->prev) current = current->prev->prev; // Logical error: jumps back 2 nodes
    }

    void forward() {
        if(current->next) current = current->next->next; // Logical error: jumps forward 2 nodes
    }

    void show() { cout << current->url << endl; }
};

int main() {
    BrowserHistory bh("home.com");
    bh.visit("page1.com");
    bh.back();
    bh.show();
    return 0;
}
