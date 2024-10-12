#include <iostream>
#include "Queue.h"
#include "Stack.h"
#include "Deque.h"

void showMenu() {
    std::cout << "1. Операции с очередью\n";
    std::cout << "2. Операции с стеком\n";
    std::cout << "3. Операции с деком\n";
    std::cout << "4. Выход\n";
    std::cout << "Введите ваш выбор: ";
}

void queueOperations() {
    Queue queue;
    int choice, value;

    do {
        std::cout << "\nОперации с очередью:\n";
        std::cout << "1. Добавить в очередь\n";
        std::cout << "2. Удалить из очереди\n";
        std::cout << "3. Показать передний элемент\n";
        std::cout << "4. Вернуться в главное меню\n";
        std::cout << "Введите ваш выбор: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Введите значение для добавления: ";
            std::cin >> value;
            queue.enqueue(value);
            break;
        case 2:
            try {
                std::cout << "Удалено значение: " << queue.dequeue() << std::endl;
            }
            catch (const std::exception& e) {
                std::cerr << e.what() << std::endl;
            }
            break;
        case 3:
            try {
                std::cout << "Передний элемент: " << queue.front() << std::endl;
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
        std::cout << "\nОперации с стеком:\n";
        std::cout << "1. Добавить в стек\n";
        std::cout << "2. Удалить из стека\n";
        std::cout << "3. Показать верхний элемент\n";
        std::cout << "4. Вернуться в главное меню\n";
        std::cout << "Введите ваш выбор: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Введите значение для добавления: ";
            std::cin >> value;
            stack.push(value);
            break;
        case 2:
            try {
                std::cout << "Удалено значение: " << stack.pop() << std::endl;
            }
            catch (const std::exception& e) {
                std::cerr << e.what() << std::endl;
            }
            break;
        case 3:
            try {
                std::cout << "Верхний элемент: " << stack.top() << std::endl;
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
        std::cout << "\nОперации с деком:\n";
        std::cout << "1. Добавить в начало\n";
        std::cout << "2. Добавить в конец\n";
        std::cout << "3. Удалить с начала\n";
        std::cout << "4. Удалить с конца\n";
        std::cout << "5. Вернуться в главное меню\n";
        std::cout << "Введите ваш выбор: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Введите значение для добавления в начало: ";
            std::cin >> value;
            deque.addFront(value);
            break;
        case 2:
            std::cout << "Введите значение для добавления в конец: ";
            std::cin >> value;
            deque.addRear(value);
            break;
        case 3:
            try {
                std::cout << "Удалено с начала: " << deque.removeFront() << std::endl;
            }
            catch (const std::exception& e) {
                std::cerr << e.what() << std::endl;
            }
            break;
        case 4:
            try {
                std::cout << "Удалено с конца: " << deque.removeRear() << std::endl;
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
            std::cout << "Выход...\n";
            break;
        default:
            std::cerr << "Неверный выбор. Попробуйте снова.\n";
        }
    } while (choice != 4);

    return 0;
}
