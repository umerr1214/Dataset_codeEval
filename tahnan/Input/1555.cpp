#include <iostream>
#include <vector>
#include <string>
using namespace std;

class EBook {
public:
    string title;
    bool borrowed;
    EBook(string t){ title=t; borrowed=false; }
};

class OnlineLibrary {
private:
    vector<EBook> books;
public:
    void addBook(EBook b){ books.push_back(b); }

    void borrowBook(string title) {
        // Logical error: does not mark borrowed
        for(int i=0;i<books.size();i++){
            if(books[i].title==title)
                books[i].borrowed = false;
        }
    }

    void displayStatus() {
        for(int i=0;i<books.size();i++)
            cout<<books[i].title<<": "<<(books[i].borrowed?"Borrowed":"Available")<<endl;
    }
};

int main() {
    OnlineLibrary lib;
    lib.addBook(EBook("C++ Guide"));
    lib.borrowBook("C++ Guide");
    lib.displayStatus();
    return 0;
}
