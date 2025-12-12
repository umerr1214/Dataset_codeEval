#include <iostream>
using namespace std;

template <typename T>
class Stack {
    T arr[10];
    int top;
public:
    Stack() { top = -1; }

    void push(T x) {
        if (top == 9) { cout << "Stack full" << endl; return; }
        arr[++top] = x;
    }

    void pop() {
        if (top == -1) { cout << "Stack empty" << endl; return; }
        cout << "Popped: " << arr[top--] << endl;
    }

    T peek() {
        if (top == -1) { cout << "Stack empty" << endl; return T(); }
        return arr[top];
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    cout << s.peek() << endl;
    s.pop();
    s.pop();
    s.pop();
    return 0;
}
