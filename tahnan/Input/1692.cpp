#include <iostream>
#include <vector>
#include <string>
using namespace std;class LibraryMember{public:string memberID,name;vector<string> borrowedBooks;void borrowBook(string b){borrowedBooks.push_back(b);cout<<b<<" borrowed\n";}void returnBook(string b){cout<<b<<" returned\n";}void displayMemberDetails(){cout<<"Member: "<<name<<" ID: "<<memberID<<"\n";}};int main(){LibraryMember lm;lm.name="Alice";lm.memberID="M001";lm.borrowBook("BookA");lm.returnBook("BookA");lm.displayMemberDetails();return 0;}
