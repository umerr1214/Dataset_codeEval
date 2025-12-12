#include <iostream>
using namespace std;

class Library {
public:
    static int totalBooks;
    Library() { totalBooks = 0; } // Semantic error: resets counter
    void addBook() { totalBooks++; }
    void display() { cout << totalBooks << endl; }
};

int Library::totalBooks = 0;

int main() {
    Library l1, l2;
    l1.addBook();
    l2.addBook();
    l1.display(); // expects 2
    return 0;
}
