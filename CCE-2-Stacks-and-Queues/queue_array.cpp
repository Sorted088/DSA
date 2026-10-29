#include <iostream>
using namespace std;

const int MAX = 5;

class queue {
private:
    int a[MAX];
    int front;
    int rear;
public:
    queue() { front = -1; rear = -1; }
    int empty() { return front == -1 && rear == -1; }
    int full() { return rear == MAX - 1; }
    void enqueue(int x) {
        if (full()) {
            cout << "\nQueue is full";
            return;
        }
        if (front == -1 && rear == -1) { front++; rear++; }
        else { rear++; }
        a[rear] = x;
    }
    int dequeue() {
        if (empty()) {
            cout << "\nQueue is empty";
            return -1;
        }
        int x = a[front];
        if (front == rear) { front = -1; rear = -1; }
        else { front++; }
        return x;
    }
    int peek() {
        if (empty()) {
            cout << "\nQueue is empty";
            return -1;
        }
        return a[front];
    }
    void display() {
        if (empty()) {
            cout << "\nQueue is empty";
            return;
        }
        cout << "\nQueue elements:";
        for (int i = front; i <= rear; i++) cout << "\t" << a[i];
    }
};

int main() {
    int x;
    queue q;
    q.enqueue(25);
    q.enqueue(57);
    q.enqueue(25);
    q.enqueue(82);
    q.enqueue(99);
    q.display();
    if (!q.empty()) {
        x = q.dequeue();
        cout << "\nRemoved: " << x;
    }
    q.display();
    x = q.peek();
    cout << "\nFront element is: " << x;
    return 0;
}
