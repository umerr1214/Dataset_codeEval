#include <iostream>
using namespace std;

template <class T>
class Stack {
private:
    T arr[5];
    int top;
public:
    Stack() 
    {
        top = -1;
    }

    void push(T x) 
    {
        if (top == 4) 
        {
            cout << "Stack Full" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    T pop() 
    {
        if (top == -1) 
        {
            cout << "Stack Empty" << endl;
            return -1;
        }
        return arr[top--];
    }
};

// SEMANTIC ERROR: misuses template with wrong type
class MyStack : public Stack<string> {};

int main() 
{
    MyStack s;
    s.push("Hello");
    s.push("World");
    cout << s.pop() << endl;
    return 0;
}
