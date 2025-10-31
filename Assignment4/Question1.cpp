#include <bits/stdc++.h>
using namespace std;

#define MAX 5
int q[MAX], frontt = -1, rear = -1;

bool isEmpty() {
    return frontt == -1;
}
bool isFull() {
    return (rear == MAX - 1);
}
void enqueue(int x) {
    if (isFull()) {
        cout << "Queue Overflow\n";
        return;
    }
    if (isEmpty()) frontt = 0;
    q[++rear] = x;
}
void dequeue() {
    if (isEmpty()) {
        cout << "Queue Underflow\n";
        return;
    }
    cout << "Deleted: " << q[frontt] << "\n";
    if (frontt == rear) frontt = rear = -1;
    else frontt++;
}
void display() {
    if (isEmpty()) {
        cout << "Queue is Empty\n";
        return;
    }
    cout << "Queue: ";
    for (int i = frontt; i <= rear; i++) cout << q[i] << " ";
    cout << "\n";
}
void peek() {
    if (isEmpty()) cout << "Queue is Empty\n";
    else cout << "Front element: " << q[frontt] << "\n";
}

int main() {
    int choice, val;
    do {
        cout << "\n1.Enqueue 2.Dequeue 3.isEmpty 4.isFull 5.Display 6.Peek 7.Exit\n";
        cin >> choice;
        switch (choice) {
            case 1: cout << "Enter value: "; cin >> val; enqueue(val); break;
            case 2: dequeue(); break;
            case 3: cout << (isEmpty() ? "Empty\n" : "Not Empty\n"); break;
            case 4: cout << (isFull() ? "Full\n" : "Not Full\n"); break;
            case 5: display(); break;
            case 6: peek(); break;
        }
    } while (choice != 7);
}
