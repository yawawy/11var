#ifndef STACK_H
#define STACK_H

#include "Queue.h"

class Stack {
    Queue q1;

public:
    void push(int value);   // Добавить элемент в стек
    int pop();              // Удалить элемент из стека
    bool isEmpty() const;   // Проверка на пустоту
    int top() const;        // Получить верхний элемент
};

#endif
