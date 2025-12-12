#include <iostream>
#include <vector>
#include <string>
using namespace std;

class LibraryMember {
public:
    int memberID;
    string name;
    vector<string> borrowedBooks;

    void borrowBook(string book) {
        if(borrowedBooks.size() >= 3)  // Edge case: max 3 books allowed
            cout << "Cannot borrow more books!" << endl;
        else {
            borrowedBooks.push_back(book);
            cout << book << " borrowed." << endl;
        }
    }

    void returnBook(string book) {
        bool found = false;
        for(int i = 0; i < borrowedBooks.size(); i++) {
            if(borrowedBooks[i] == book) {
                borrowedBooks.erase(borrowedBooks.begin() + i);
                found = true;
                cout << book << " returned." << endl;
                break;
            }
        }
        if(!found)
            cout << book << " not found in borrowed books!" << endl;
    }

    void displayMemberDetails() {
        cout << "Member: " << name << " ID:" << memberID << " Books: ";
        for(auto &b: borrowedBooks) cout << b << " ";
        cout << endl;
    }
};

int main() {
    LibraryMember lm;
    lm.memberID = 101;
    lm.name = "Alice";
    
    lm.borrowBook("BookA");
    lm.borrowBook("BookB");
    lm.borrowBook("BookC");
    lm.borrowBook("BookD");  // Edge case: exceeds limit
    lm.returnBook("BookX");  // Edge case: book not borrowed
    lm.displayMemberDetails();

    return 0;
}
