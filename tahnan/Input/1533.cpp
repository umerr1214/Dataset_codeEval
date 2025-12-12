#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
public:
    string title, author, genre;
    double price;
    Book(string t,string a,string g,double p){title=t; author=a; genre=g price=p;}
};

class BookStore {
private:
    vector<Book> books;
public:
    void addBook(Book b){books.push_back(b);}
    void displayBooks(){
        for(int i=0;i<books.size();i++)
            cout<<books[i].title<<" by "<<books[i].author<<endl
    }
};

int main() {
    BookStore store;
    store.addBook(Book("Book1","Author1","Fiction",10));
    store.addBook(Book("Book2","Author2","Non-Fiction",12));
    store.displayBooks();
    return 0;
}
