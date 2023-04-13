#pragma once
#ifndef QUEUE_H
#define QUEUE_H

class Queue {
public:
    Queue();
    void enqueue(int data);
    int dequeue();
    int front();
    bool isEmpty();
    int size();

private:
    struct Node {
        int data;
        Node* next;
        Node(int data, Node* next = nullptr) {
            this->data = data;
            this->next = next;
        }
    };

    Node* head;
    Node* tail;
    int count;
};

#endif // QUEUE_H
