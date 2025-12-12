#include<iostream>
#include<string>
using namespace std;class Book{public:string title,author;Book(string t,string a){title=t;author=a;}Book(const Book &b){title=b.title;author=b.author;}};int main(){Book b1("CPP","John");Book b2=b1;cout<<b2.title<<" "<<b2.author<<endl;return 0;}
