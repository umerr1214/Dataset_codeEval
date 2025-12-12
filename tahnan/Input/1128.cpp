#include <iostream>
using namespace std;

class String {
private:
    string str;
public:
    void input() { cin >> str; }
    String operator+(String s) {
        // Logical error: replaces instead of concatenates
        String temp;
        temp.str = s.str;
        return temp;
    }
    bool operator==(String s) { return str == s.str; }
    char operator[](int i) { return str[i]; }
    void display() { cout << str << endl; }
};

int main() {
    String s1, s2, s3;
    s1.input();
    s2.input();
    s3 = s1 + s2;
    s3.display();
    return 0;
}
