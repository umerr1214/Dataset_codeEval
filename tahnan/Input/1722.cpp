#include <iostream>
#include <vector>
#include <string>
using namespace std;

class LibraryMember {
public:
    string memberID;
    string name;
    vector<string> borrowedBooks;

    void borrowBook(string book) {
        borrowedBooks.push_back(book);
        cout << book << " borrowed\n";
    }

    void returnBook(string book) {
        for (auto it = borrowedBooks.begin(); it != borrowedBooks.end(); ++it) {
            if (*it == book) {
                borrowedBooks.erase(it);
                cout << book << " returned\n";
                return;
            }
        }
        cout << "Book not found\n";
    }

    void displayMemberDetails() {
        cout << name << " borrowed: ";
        for (auto &b : borrowedBooks) {
            cout << b << " ";
        }
        cout << "\n";
    }
};

int main() {
    LibraryMember lm;
    lm.memberID = "M001";
    lm.name = "Alice";

    lm.borrowBook("BookA");
    lm.displayMemberDetails();

    lm.returnBook("BookA");
    lm.displayMemberDetails();

    return 0;
}
