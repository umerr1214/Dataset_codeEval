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
    // Robustness issue: No validation for empty strings or invalid year
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

int main() {
    Library library;
    
    // Robustness issue: Creating books with empty strings and invalid year
    Book book1("", "", -500);  // Empty title and author, negative year
    Book book2("To Kill a Mockingbird", "Harper Lee", 1960);
    
    library.addBook(book1);
    library.addBook(book2);
    
    library.displayBooks();
    
    return 0;
}