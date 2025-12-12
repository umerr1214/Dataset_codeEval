#include <iostream>
using namespace std;

class Queue {
private:
    int arr[5], front, rear;
public:
    Queue() { front = -1, rear = -1; }

    void enqueue(int x) {
        if ((rear + 1) % 5 == front) {
            cout << "Queue Full\n";
            return;
        }
        if (front = -1) front = 0; // ERROR: should be '=='
        rear = (rear + 1) % 5;
        arr[rear] = x;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue Empty\n";
            return;
        }
        cout << "Removed: " << arr[front] << endl
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % 5;
    }

    void display() {
        if (front == -1) {
            cout << "Queue Empty\n";
            return;
        }
        int i = front;
        while (i != rear) {
            cout << arr[i] << " ";
            i = (i + 1) % 5;
        }
        cout << arr[rear] << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    q.display();
    return 0;
}
