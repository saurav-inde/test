#include <stdio.h>
#include <math.h>

#define MAX 20

struct Stack
{
    int array[MAX];
    int top;

} stack;

// function to push the new element to the stack
void push(int data)
{
    if (stack.top == MAX - 1)
    {
        printf("Overflow!\n");
        return;
    }

    stack.array[++stack.top] = data;
}

// function to delete i.e. pop the top element of the stack
void pop()
{
    if (stack.top == -1)
    {
        printf("Overflow!\n");
        return;
    }

    printf("%d \n", stack.array[stack.top--]);
}

// MAIN FUNCTION
int main()
{
    int n;
    printf("Enter the number of the elements to be pushed.");
    scanf("%d", &n);

    for (int data, i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &data);
        push(data);
    }

    printf("calling push function: \n");
    pop();
    pop();
    pop();

    printf("Printing the stack with the elements left after calling the pop function above\n");
    while (stack.top > 0)
    {
        printf("%d \n", stack.array[stack.top--]);
    }

    return 0;
}