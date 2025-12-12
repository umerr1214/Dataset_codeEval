#include <iostream>
using namespace std;

class String {
private:
    char str[100];

public:
    void input() {
        cin >> str
    }

    char operator[](int i) {
        return str[i]
    }

    String operator+(String s) {
        String result;
        // simple placeholder
        return result
    }

    bool operator==(String s) {
        return true
    }
};

int main() {
    String s1, s2;
    s1.input()
    s2.input()
    String s3 = s1 + s2
    cout << (s1 == s2)
    return 0;
}
