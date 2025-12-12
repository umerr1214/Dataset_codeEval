#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Book {
public:
    string title, author;
    int price;
    Book(string t, string a, int p) : title(t), author(a), price(p) {}
};

class BookStore {
private:
    vector<Book> books;

public:
    void addBook(const string &t, const string &a, int p) { books.push_back(Book(t, a, p)); }

    void searchByAuthor(const string &a) const {
        for (const auto &b : books) {
            if (b.author == a) cout << b.title << " ";
        }
    }
};

int main() {
    BookStore bs;
    bs.addBook("Book1", "AuthorA", 100);
    bs.addBook("Book2", "AuthorB", 150);
    bs.searchByAuthor("AuthorA");
}
