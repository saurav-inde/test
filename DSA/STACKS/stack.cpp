#include <iostream>
using namespace std;

typedef class Stack
{

    int top;
    int values[10];
   

public:
    // Stack(int val, int datapt...) : top(-1)
    // {
    //     int i = 0;

    //     while (i++ <= 10)
    //     {
    //         values[top++] = val;

    //         Stack(datapt...);
    //     }
    // }
    Stack() : top(-1)
    {
    }

    // funtion to push new elements on the top of the stack
    void push(int data)
    {
        if (top == 10)
        {
            cout << "\nStack is already full and new element can't be added.\n";
            return;
        }

        values[++top] = data;
        // cout << values[top];
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
        if (top == 10)
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
} stack;

int main()
{
    Stack stc;
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