#include "Queue.h"
using namespace std;

Queue::Queue() {
    head = nullptr;
    tail = nullptr;
    count = 0;
}

void Queue::enqueue(int data) {
    Node* newNode = new Node(data);

    if (isEmpty()) {
        head = newNode;
    }
    else {
        tail->next = newNode;
    }

    tail = newNode;
    count++;
}

int Queue::dequeue() {
    if (isEmpty()) {
        throw "Queue is empty";
    }

    int data = head->data;
    Node* temp = head;
    head = head->next;
    delete temp;
    count--;

    return data;
}

int Queue::front() {
    if (isEmpty()) {
        throw "Queue is empty";
    }

    return head->data;
}

bool Queue::isEmpty() {
    return count == 0;
}

int Queue::size() {
    return count;
}
