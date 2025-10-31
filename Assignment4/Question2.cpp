#include <bits/stdc++.h>
using namespace std;

#define MAX 5
int cq[MAX], frontt = -1, rear = -1;

bool isEmpty() {
    return frontt == -1;
}
bool isFull() {
    return (frontt == (rear + 1) % MAX);
}
void enqueue(int x) {
    if (isFull()) {
        cout << "Queue Overflow\n";
        return;
    }
    if (isEmpty()) frontt = 0;
    rear = (rear + 1) % MAX;
    cq[rear] = x;
}
void dequeue() {
    if (isEmpty()) {
        cout << "Queue Underflow\n";
        return;
    }
    cout << "Deleted: " << cq[frontt] << "\n";
    if (frontt == rear) frontt = rear = -1;
    else frontt = (frontt + 1) % MAX;
}
void display() {
    if (isEmpty()) {
        cout << "Queue Empty\n"; return;
    }
    cout << "Queue: ";
    int i = frontt;
    while (true) {
        cout << cq[i] << " ";
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    cout << "\n";
}
void peek() {
    if (isEmpty()) cout << "Queue Empty\n";
    else cout << "Front element: " << cq[frontt] << "\n";
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
