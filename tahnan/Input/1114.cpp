#include <iostream>
using namespace std;

class Library {
private:
    string book
public:
    static int totalBooks

    Library(string b) {
        book = b;
        totalBooks++
    }

    void display() {
        cout << book << endl
    }
};

int Library::totalBooks = 0;

int main() {
    Library l1("Book1")
    Library l2("Book2")
    cout << Library::totalBooks << endl
    return 0;
}
