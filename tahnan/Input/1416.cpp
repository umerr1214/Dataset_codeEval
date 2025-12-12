#include <iostream>
using namespace std;

struct Node {
    string url;
    Node* prev;
    Node* next;
    Node(string u) {
        url = u;
        prev = nullptr;
        next = nullptr;
    }
};

class BrowserHistory {
    Node* current;
public:
    BrowserHistory() {
        current = nullptr;
    }
    
    void visit(string u) {
        Node* n = new Node(u);
        if(current != nullptr) {
            current->next = n;
            n->prev = current;
        }
        current = n;
        cout << "Visited " << u << endl;
    }
    
    void back() {
        if(current != nullptr && current->prev != nullptr) {
            current = current->prev;
            cout << "Back to " << current->url << endl;
        } else {
            cout << "Cannot go back" << endl;
        }
    }
    
    void forward() {
        if(current != nullptr && current->next != nullptr) {
            current = current->next;
            cout << "Forward to " << current->url << endl;
        } else {
            cout << "Cannot go forward" << endl;
        }
    }
};

int main() {
    BrowserHistory bh;
    bh.visit("google.com");
    bh.visit("facebook.com");
    bh.back();
    bh.forward();
    return 0;
}
