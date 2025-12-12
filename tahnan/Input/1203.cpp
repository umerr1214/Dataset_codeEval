#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;

public:
    void input() {
        cin >> str;
    }

    void display() {
        cout << str << endl;
    }

    bool operator==(const MyString &s) {
        return str == s.str;
    }

    MyString operator+(const MyString &s) {
        MyString res;
        res.str = str + s.str;
        return res;
    }

    char operator[](int index) {
        return str[index];
    }
};

int main() {
    MyString s1, s2, s3;
    s1.input();
    s2.input();
    s3 = s1 + s2;
    s3.display();
    cout << (s1 == s2) << endl;
    cout << s3[0] << endl;
    return 0;
}
