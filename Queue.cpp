#include "Queue.h"

void Queue::enqueue(int value) {
    q.push(value);
}

int Queue::dequeue() {
    if (!q.empty()) {
        int value = q.front();
        q.pop();
        return value;
    }
    throw std::out_of_range("Queue is empty!");
}

bool Queue::isEmpty() const {
    return q.empty();
}

int Queue::front() const {
    if (!q.empty()) {
        return q.front();
    }
    throw std::out_of_range("Queue is empty!");
}
