#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    double price;
    Book(string t,string a,double p){ title=t; author=a; price=p; }
};

class BookStore {
private:
    vector<Book> books;
public:
    void addBook(Book b){ books.push_back(b); }

    void searchByAuthor(string name) {
        // Logical error: prints all books regardless of author
        for(int i=0;i<books.size();i++)
            cout<<books[i].title<<endl;
    }
};

int main() {
    BookStore store;
    store.addBook(Book("Book1","Author1",10));
    store.addBook(Book("Book2","Author2",12));
    store.searchByAuthor("Author1");
    return 0;
}
