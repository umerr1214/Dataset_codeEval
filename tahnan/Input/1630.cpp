#include <iostream>
#include <vector>
#include <string>
using namespace std;

class EBook {
public:
    string title;
    bool borrowed;
    EBook(string t) : title(t), borrowed(false) {}
};

class OnlineLibrary {
private:
    vector<EBook> books;

public:
    void addBook(const string &t) { books.push_back(EBook(t)); }
    void borrowBook(const string &t) {
        for (auto &b : books)
            if (b.title == t) b.borrowed = true;
    }
    void returnBook(const string &t) {
        for (auto &b : books)
            if (b.title == t) b.borrowed = false;
    }
    void display() const {
        for (const auto &b : books) cout << b.title << " ";
    }
};

int main() {
    OnlineLibrary lib;
    lib.addBook("BookA");
    lib.borrowBook("BookA");
    lib.display();
}
