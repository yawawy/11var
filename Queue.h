#ifndef QUEUE_H
#define QUEUE_H

#include <queue>
#include <stdexcept>

class Queue {
    std::queue<int> q;

public:
    void enqueue(int value);  // Добавить элемент в очередь
    int dequeue();            // Удалить элемент из очереди
    bool isEmpty() const;     // Проверка на пустоту
    int front() const;        // Получить передний элемент
};

#endif
