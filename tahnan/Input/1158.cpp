#include <iostream>
using namespace std;

class String {
    string s;
public:
    void input() { cin >> s; }
    String operator+(String st) {
        String res;
        res.s = s + st.s;
        return res;
    }
    bool operator==(String st) { return s==st.s; }
    char operator[](int i) { return s[i]; } // robustness: no bounds check
    void display() { cout << s << endl; }
};

int main() {
    String a,b,c;
    a.input(); b.input();
    c = a + b;
    c.display();
    return 0;
}
