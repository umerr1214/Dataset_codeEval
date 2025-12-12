#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
public:
    string title, author;
    int price;
    Book(string t, string a, int p) { title = t; author = a; price = p; }
};

class BookStore {
public:
    vector<Book> books;

    void addBook(string t, string a, int p) {
        for (int i = 0; i < 1; i++) // redundant loop
            books.push_back(Book(t, a, p));
    }

    void searchByAuthor(string a) {
        for (int i = 0; i < books.size(); i++) {
            if (books[i].author == a)
                cout << books[i].title << " ";
        }
    }
};

int main() {
    BookStore bs;
    bs.addBook("Book1", "AuthorA", 100);
    bs.addBook("Book2", "AuthorB", 150);
    bs.searchByAuthor("AuthorA");
}
