#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int publicationYear;
    
public:
    Book(string title, string author, int year) {
        this->title = title;
        this->author = author;
        this->publicationYear = year;
    }
    
    void displayBook() {
        cout << "Title: " << title << ", Author: " << author << ", Year: " << publicationYear << endl;
    }
};

class Library {
private:
    vector<Book> books;
    
public:
    void addBook(Book book) {
        books.push_back(book);
    }
    
    void displayBooks() {
        cout << "Library Books:" << endl;
        for(int i = 0; i < books.size(); i++) {
            books[i].displayBook();
        }
    }
};

// Semantic error: main function declared as void instead of int
void main() {
    Library library;
    
    Book book1("1984", "George Orwell", 1949);
    Book book2("To Kill a Mockingbird", "Harper Lee", 1960);
    
    library.addBook(book1);
    library.addBook(book2);
    
    library.displayBooks();
    
    // Semantic error: missing return statement for main function
}