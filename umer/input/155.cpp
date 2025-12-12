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
    // Readability issue: Poor parameter naming
    Book(string t, string a, int y) {
        this->title = t;
        this->author = a;
        this->publicationYear = y;
    }
    
    void displayBook() {
        cout << "Title: " << title << ", Author: " << author << ", Year: " << publicationYear << endl;
    }
};

class Library {
private:
    vector<Book> books;
    
public:
    // Efficiency issue: Pass by value instead of reference
    void addBook(Book book) {
        books.push_back(book);
    }
    
    void displayBooks() {
        cout << "Library Books:" << endl;
        // Efficiency issue: Inefficient loop - could use range-based for loop
        for(int i = 0; i < books.size(); i++) {
            // Efficiency issue: Unnecessary copying
            Book temp = books[i];
            temp.displayBook();
        }
    }
};

int main() {
    Library library;
    
    // Readability issue: Magic strings without explanation
    Book book1("1984", "George Orwell", 1949);
    Book book2("To Kill a Mockingbird", "Harper Lee", 1960);
    
    library.addBook(book1);
    library.addBook(book2);
    
    library.displayBooks();
    
    return 0;
}