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

// SEMANTIC ERROR: main uses wrong class type
class WrongQueue : public Queue {};

int main() 
{
    WrongQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    q.display();
    return 0;
}
