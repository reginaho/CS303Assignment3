#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue q;

    // Enqueue some elements
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    // Print the elements in the queue
    cout << "Elements in the queue: ";
    while (!q.isEmpty()) {
        cout << q.front() << " ";
        q.dequeue();
    }
    cout << endl;

    //Inserts new elements at the rear of the queue.
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    // Return the front element without removing it
    cout << "Front element: " << q.front() << endl;

    // Removes the front element of the queue and returns it.
    cout << "Dequeued element: " << q.dequeue() << endl;
    cout << "Dequeued element: " << q.dequeue() << endl;

    // Returns the total number of elements present in the queue
    cout << "Queue size: " << q.size() << endl;

    // Check if the queue is empty
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    cout << endl;
    // Print the elements in the queue
    cout << "Elements in the queue: ";
    while (!q.isEmpty()) {
        cout << q.front() << " ";
        q.dequeue();
    }
    cout << endl;

    q.enqueue(3);
    q.enqueue(4);

    // Dequeue all remaining elements
    for (int i = 0; i < 5; i++) {
        if (!q.isEmpty()) {
            cout << "Dequeued the remaining elements: " << q.front() << endl;
            q.dequeue();
        }
    }
    
    cout << endl;

    // Returns the total number of elements present in the queue
    cout << "Queue size: " << q.size() << endl;

    // Check if the queue is empty
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
