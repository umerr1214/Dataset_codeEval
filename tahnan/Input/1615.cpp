#include <iostream>
#include <vector>
#include <string>
using namespace std;

class EBook {
public:
    string title;
    bool borrowed;
    EBook(string t) { title = t; borrowed = false; }
};

class OnlineLibrary {
public:
    vector<EBook> books;

    void addBook(string t) { books.push_back(EBook(t)); }

    void borrowBook(string t) {
        // inefficient: linear search without early break
        for (int i = 0; i < books.size(); i++) {
            if (books[i].title == t) {
                books[i].borrowed = true;
            }
        }
    }

    void returnBook(string t) {
        for (int i = 0; i < books.size(); i++) {
            if (books[i].title == t) {
                books[i].borrowed = false;
            }
        }
    }

    void display() {
        for (int i = 0; i < books.size(); i++)
            cout << books[i].title << " ";
    }
};

int main() {
    OnlineLibrary lib;
    lib.addBook("BookA");
    lib.borrowBook("BookA");
    lib.display();
}
