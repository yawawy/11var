#include "Stack.h"

void Stack::push(int value) {
    Queue q2;
    q2.enqueue(value);

    while (!q1.isEmpty()) {
        q2.enqueue(q1.dequeue());
    }

    q1 = q2;
}

int Stack::pop() {
    if (!q1.isEmpty()) {
        return q1.dequeue();
    }
    throw std::out_of_range("Stack is empty!");
}

bool Stack::isEmpty() const {
    return q1.isEmpty();
}

int Stack::top() const {
    if (!q1.isEmpty()) {
        return q1.front();
    }
    throw std::out_of_range("Stack is empty!");
}
