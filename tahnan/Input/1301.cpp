#include <iostream>
using namespace std;

class Queue {
    int arr[5];
    int front, rear, size;
public:
    Queue() {
        front = rear = -1;
        size = 5;
    }

    void enqueue(int x) {
        if ((rear + 1) % size == front) {
            cout << "Queue Full" << endl;
            return;
        }
        if (front == -1) front = 0;
        rear = (rear + 1) % size;
        arr[rear] = x;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue Empty" << endl;
            return;
        }
        cout << "Dequeued: " << arr[front] << endl;
        if (front == rear) front = rear = -1;
        else front = (front + 1) % size;
    }

    void display() {
        if (front == -1) {
            cout << "Queue Empty" << endl;
            return;
        }
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
