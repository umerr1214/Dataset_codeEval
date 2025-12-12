#include <iostream>
using namespace std;

class Book {
private:
    string title;
public:
    static int totalBooks;

    void input() {
        cin >> title;
        totalBooks++;
    }

    void display() {
        cout << title << endl;
    }
};

int Book::totalBooks = 0;

int main() {
    Book b1, b2;
    b1.input();
    b2.input();
    cout << "Total books: " << Book::totalBooks << endl;
    return 0;
}
