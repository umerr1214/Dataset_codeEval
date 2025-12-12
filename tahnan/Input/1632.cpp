#include <iostream>
#include <vector>
using namespace std;

class LibraryMember {
public:
    int memberID;
    string name;
    vector<string> borrowedBooks

    void borrowBook(string book) {
        borrowedBooks.push_back(book)
    }

    void returnBook(string book) {
        for(int i=0;i<borrowedBooks.size();i++)
            if(borrowedBooks[i]==book)
                borrowedBooks.erase(borrowedBooks.begin()+i)
    }

    void displayMemberDetails() {
        cout << "Member: " << name << endl
        cout << "Borrowed Books: ";
        for(auto &b: borrowedBooks) cout << b << " ";
        cout << endl;
    }
};

int main() {
    LibraryMember m;
    m.memberID = 1;
    m.name = "Alice";

    m.borrowBook("BookA");
    m.borrowBook("BookB");
    m.returnBook("BookA");
    m.displayMemberDetails();

    return 0;
}
