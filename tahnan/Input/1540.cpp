#include <iostream>
#include <vector>
#include <string>
using namespace std;

class EBook {
public:
    string title;
    EBook(string t){title=t}
};

class OnlineLibrary {
private:
    vector<EBook> books;
public:
    void borrow(EBook b){cout<<"Borrowed "<<b.title<<endl;}
    void returnBook(EBook b){cout<<"Returned "<<b.title<<endl;}
};

int main() {
    OnlineLibrary lib;
    EBook b1("Book1");
    lib.borrow(b1);
    lib.returnBook(b1);
    return 0;
}
