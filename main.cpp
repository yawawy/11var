#include <iostream>
#include "Queue.h"
#include "Stack.h"
#include "Deque.h"

void showMenu() {
    std::cout << "1. �������� � ��������\n";
    std::cout << "2. �������� � ������\n";
    std::cout << "3. �������� � �����\n";
    std::cout << "4. �����\n";
    std::cout << "������� ��� �����: ";
}

void queueOperations() {
    Queue queue;
    int choice, value;

    do {
        std::cout << "\n�������� � ��������:\n";
        std::cout << "1. �������� � �������\n";
        std::cout << "2. ������� �� �������\n";
        std::cout << "3. �������� �������� �������\n";
        std::cout << "4. ��������� � ������� ����\n";
        std::cout << "������� ��� �����: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "������� �������� ��� ����������: ";
            std::cin >> value;
            queue.enqueue(value);
            break;
        case 2:
            try {
                std::cout << "������� ��������: " << queue.dequeue() << std::endl;
            }
            catch (const std::exception& e) {
                std::cerr << e.what() << std::endl;
            }
            break;
        case 3:
            try {
                std::cout << "�������� �������: " << queue.front() << std::endl;
            }
            catch (const std::exception& e) {
                std::cerr << e.what() << std::endl;
            }
            break;
        }
    } while (choice != 4);
}

void stackOperations() {
    Stack stack;
    int choice, value;

    do {
        std::cout << "\n�������� � ������:\n";
        std::cout << "1. �������� � ����\n";
        std::cout << "2. ������� �� �����\n";
        std::cout << "3. �������� ������� �������\n";
        std::cout << "4. ��������� � ������� ����\n";
        std::cout << "������� ��� �����: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "������� �������� ��� ����������: ";
            std::cin >> value;
            stack.push(value);
            break;
        case 2:
            try {
                std::cout << "������� ��������: " << stack.pop() << std::endl;
            }
            catch (const std::exception& e) {
                std::cerr << e.what() << std::endl;
            }
            break;
        case 3:
            try {
                std::cout << "������� �������: " << stack.top() << std::endl;
            }
            catch (const std::exception& e) {
                std::cerr << e.what() << std::endl;
            }
            break;
        }
    } while (choice != 4);
}

void dequeOperations() {
    Deque deque;
    int choice, value;

    do {
        std::cout << "\n�������� � �����:\n";
        std::cout << "1. �������� � ������\n";
        std::cout << "2. �������� � �����\n";
        std::cout << "3. ������� � ������\n";
        std::cout << "4. ������� � �����\n";
        std::cout << "5. ��������� � ������� ����\n";
        std::cout << "������� ��� �����: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "������� �������� ��� ���������� � ������: ";
            std::cin >> value;
            deque.addFront(value);
            break;
        case 2:
            std::cout << "������� �������� ��� ���������� � �����: ";
            std::cin >> value;
            deque.addRear(value);
            break;
        case 3:
            try {
                std::cout << "������� � ������: " << deque.removeFront() << std::endl;
            }
            catch (const std::exception& e) {
                std::cerr << e.what() << std::endl;
            }
            break;
        case 4:
            try {
                std::cout << "������� � �����: " << deque.removeRear() << std::endl;
            }
            catch (const std::exception& e) {
                std::cerr << e.what() << std::endl;
            }
            break;
        }
    } while (choice != 5);
}

int main() {
    setlocale(LC_ALL, "RUS");
    int choice;

    do {
        showMenu();
        std::cin >> choice;

        switch (choice) {
        case 1:
            queueOperations();
            break;
        case 2:
            stackOperations();
            break;
        case 3:
            dequeOperations();
            break;
        case 4:
            std::cout << "�����...\n";
            break;
        default:
            std::cerr << "�������� �����. ���������� �����.\n";
        }
    } while (choice != 4);

    return 0;
}
