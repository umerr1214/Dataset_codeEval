#include<iostream>
#include<string>
using namespace std;
class Book{
public:
    string title, author;
    Book(string t="", string a=""){title=t; author=a;}
    Book(const Book &b){title=b.title; author=b.author;} // deep copy not really needed here
    void display(){cout<<title<<" by "<<author<<endl;}
};
int main(){
    string t,a;
    cin>>t>>a;
    Book b1(t,a);
    Book b2=b1;
    b2.display();
    return 0;
}
