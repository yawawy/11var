#ifndef QUEUE_H
#define QUEUE_H

#include <queue>
#include <stdexcept>

class Queue {
    std::queue<int> q;

public:
    void enqueue(int value);  // �������� ������� � �������
    int dequeue();            // ������� ������� �� �������
    bool isEmpty() const;     // �������� �� �������
    int front() const;        // �������� �������� �������
};

#endif
