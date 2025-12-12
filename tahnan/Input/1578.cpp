#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
public:
    string title, author, genre;
    int price;
    Book(string t,string a,string g,int p){ title=t; author=a; genre=g; price=p; }
};

class BookStore {
private:
    vector<Book> books;
public:
    void addBook(Book b){ books.push_back(b); }

    void searchByAuthor(string a){
        for(auto &b: books)
            if(b.author==a)
                cout<<b.title<<endl;
        // Robustness issue: no message if none found
    }

    void searchByGenre(string g){
        for(auto &b: books)
            if(b.genre==g)
                cout<<b.title<<endl;
    }

    void searchByPrice(int minP,int maxP){
        for(auto &b: books)
            if(b.price>=minP && b.price<=maxP)
                cout<<b.title<<endl;
    }
};

int main(){
    BookStore bs;
    bs.addBook(Book("Book1","AuthorA","SciFi",500));
    bs.addBook(Book("Book2","AuthorB","Romance",300));
    bs.searchByAuthor("AuthorA");
    bs.searchByGenre("Romance");
    bs.searchByPrice(200,600);
    return 0;
}
