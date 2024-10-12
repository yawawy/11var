#ifndef STACK_H
#define STACK_H

#include "Queue.h"

class Stack {
    Queue q1;

public:
    void push(int value);   // �������� ������� � ����
    int pop();              // ������� ������� �� �����
    bool isEmpty() const;   // �������� �� �������
    int top() const;        // �������� ������� �������
};

#endif
