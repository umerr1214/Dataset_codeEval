#include <iostream>
using namespace std;

template <class T>
class Stack {
private:
    T arr[5];
    int top;
public:
    Stack() { top = -1; }
    void push(T x) {
        if (top == 4) cout << "Stack Full\n";
        else
            arr[++top] = x // missing semicolon
    }
    T pop() {
        if (top == -1) { cout << "Stack Empty\n"; return -1; }
        else return arr[top--];
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
    return 0;
}
