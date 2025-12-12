#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title, author;
    Book(string t="", string a="") { title=t; author=a; }
    void display() { cout << title << " by " << author << endl; }
};

int main() {
    string t1,a1,t2,a2;
    cin >> t1 >> a1 >> t2 >> a2;
    Book b1(t1,a1), b2(t2,a2);
    b1.display();
    b2.display();
    return 0;
}
