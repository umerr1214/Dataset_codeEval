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
        current = new Node(homepage)
    }

    void visit(string url) {
        Node* n = new Node(url);
        current->next = n;
        n->prev = current;
        current = n;
    }

    void back() { if(current->prev) current = current->prev; }
    void forward() { if(current->next) current = current->next; }

    void show() { cout << current->url << endl; }
};

int main() {
    BrowserHistory bh("home.com");
    bh.visit("page1.com");
    bh.back();
    bh.show();
    return 0;
}
