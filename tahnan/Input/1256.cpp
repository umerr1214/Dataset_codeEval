#include <iostream>
using namespace std;

class Queue {
private:
    int arr[5];
    int front;
    int rear;
public:
    Queue() 
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int x) 
    {
        if ((rear + 1) % 5 == front) 
        {
            cout << "Queue Full" << endl;
            return;
        }
        if (front == -1) 
        {
            front = 0;
        }
        rear = (rear + 1) % 5;
        arr[rear] = x;
    }

    void dequeue() 
    {
        if (front == -1) 
        {
            cout << "Queue Empty" << endl;
            return;
        }
        cout << "Removed: " << arr[front] << endl;
        if (front == rear) 
        {
            front = rear = -1;
        } 
        else 
        {
            front = (front + 1) % 5;
        }
    }

    void display() 
    {
        if (front == -1) 
        {
            cout << "Queue Empty" << endl;
            return;
        }
        int i = front;
        while (i != rear) 
        {
            cout << arr[i] << " ";
            i = (i + 1) % 5;
        }
        cout << arr[rear] << endl;
    }
};

int main() 
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6); // robustness issue: overfill
    q.dequeue();
    q.display();
    return 0;
}
