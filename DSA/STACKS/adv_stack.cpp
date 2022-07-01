#include <iostream>
using namespace std;

typedef class Stack
{

    int top;
    int size;
    int *values;

public:
    // constructor to create stack
    Stack(int capacity) : top(-1)
    {
        size = capacity;
        values = new int[capacity];
    }

    // funtion to push new elements on the top of the stack
    void push(int data)
    {
        if (top == size)
        {
            cout << "\nStack is already full and new element can't be added.\n";
            return;
        }

        values[++top] = data;
    };

    // function to pop the last element of the stack
    void pop()
    {
        if (top == -1)
        {
            cout << "\nThe stack is empty! Please add data before viewing.\n";
            return;
        }

        cout << values[top--];
    }

    // function to see if the stack is empty
    void is_empty()
    {
        if (top == -1)
        {
            cout << "\nStack is empty.\n";
            return;
        }
        cout << "stack has", top, "elements.\n";
    }

    // function to see if the stack is full
    void is_full()
    {
        if (top == size)
        {
            cout << "\nStack is full.\n";
            return;
        }
        cout << "stack has only", top, "elements.\n";
    }

    // function to view the last element without pop
    void peek()
    {
        if (top != -1)
        {
            cout << values[top];
            return;
        }
        cout << "The stack is empty";
    }

    //overload of []
    Stack operator [] (Stack const &obj);
} stack;

int main()
{
    Stack stc(20);
    stc.push(65);
    stc.push(659);
    stc.push(6059);
    // stc.push(6590);
    // stc.push(6510);
    // stc.push(65161);
    // stc.push(695);
    // stc.push(615);
    // stc.push(365);
    // stc.push(651);
    // stc.push(655);
    stc.pop();
    stc.pop();
    stc.pop();
    stc.pop();
    stc.pop();

    return 0;
}