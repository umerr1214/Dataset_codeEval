#include <iostream>
using namespace std;

class Book {
public:
    string title
    string author;
    Book(string t, string a) { title = t; author = a; }
    Book(const Book &b) { title = b.title; author = b.author }
    void display() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    Book b1("CPP Basics", "Alice");
    Book b2 = b1;
    b1.display();
    b2.display();
    return 0;
}
