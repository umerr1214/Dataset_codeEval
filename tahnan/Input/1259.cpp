#include <iostream>
using namespace std;

template <typename T>
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
        if (top >= 4) 
        {
            cout << "Stack Full" << endl;
            return;
        }
        arr[++top] = x;
    }

    void pop() 
    {
        if (top < 0) 
        {
            cout << "Stack Empty" << endl;
            return;
        }
        cout << "Popped: " << arr[top] << endl;
        top--;
    }

    T peek() 
    {
        return arr[top];
    }
};

int main() 
{
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60); // robustness issue: overfill
    s.pop();
    cout << "Top element: " << s.peek() << endl;
    return 0;
}
