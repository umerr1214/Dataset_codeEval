#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    Book(string t, string a) { title = t; author = a; }
    Book(const Book &b) { title = b.title; author = b.author; } // copy constructor
    void display() { cout << title << " by " << author << endl; }
};

int main() {
    Book b1("C++ Primer", "Lippman");
    Book b2 = b1;
    b2.title = "Effective C++";
    b1.display();
    b2.display();
    return 0;
}
