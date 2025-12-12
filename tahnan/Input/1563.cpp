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
        // Semantic error: accesses private vector via reference incorrectly
        vector<Book> &b = books; // unnecessary alias
        for(int i=0;i<b.size();i++){
            if(b[i].author==name)
                cout<<b[i].title<<endl;
        }
    }
};

int main() {
    BookStore store;
    store.addBook(Book("Book1","Author1",10));
    store.addBook(Book("Book2","Author2",12));
    store.searchByAuthor("Author1");
    return 0;
}
