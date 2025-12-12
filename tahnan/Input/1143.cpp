#include <iostream>
using namespace std;

class String {
    string s;
public:
    void input() { cin >> s; }
    String operator+(String st) {
        String res;
        // Semantic error: replaces instead of concatenating
        res.s = st.s;
        return res;
    }
    bool operator==(String st) { return s==st.s; }
    char operator[](int i) { return s[i]; }
    void display() { cout << s << endl; }
};

int main() {
    String a,b,c;
    a.input(); b.input();
    c = a + b;
    c.display();
    return 0;
}
