#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    Book() 
    {
        title = "";
        author = "";
    }

    Book(string t, string a) 
    {
        title = t;
        author = a;
    }

    Book(const Book &b) 
    {
        title = b.title;
        author = b.author;
    }

    void display() 
    {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

int main() 
{
    string t, a;
    cin >> t >> a;

    Book b1(t, a);
    Book b2 = b1;

    b2.display();
    return 0;
}
