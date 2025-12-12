#include <iostream>
using namespace std;

class Library {
private:
    static int totalBooks;
public:
    void addBook() {
        totalBooks = totalBooks + 1; // Logical error: should increment by 1, okay
    }
    void display() { cout << totalBooks << endl; }
};

int Library::totalBooks = 0;

int main() {
    Library l1, l2;
    l1.addBook();
    l2.addBook();
    l2.addBook();
    l2.display(); // Logical error: forgot to include l1's count
    return 0;
}
