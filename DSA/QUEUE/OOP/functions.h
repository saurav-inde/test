#include "class_declaration.h"
#include <iostream>
queue :: queue(int n)
    {
        int data;

        node *temp;

        for (int i = 0; i < n; i++)
        {
            std::cout << "\nEnter the value " << i + 1 << ": ";
            std::cin >> data;

            temp = new node;
            temp->data = data;
            temp->next = rear;
            i > 0 ? rear->prev = temp : front = temp;
            rear = temp;
        }
    }

    void queue::display(void)
    {
        node *ptr = front;
        while (ptr != nullptr)
        {
            std::cout << ptr->data << std::endl;
            ptr = ptr->prev;
        }
    }

    void queue::enqueue()
    {
        int data;
        std::cout << "\nEnter the new data to be enqued: ";
        std::cin >> data;

        rear->prev = new node;
        rear->prev->next = rear;
        rear->prev->data = data;
        rear = rear->prev;
    }