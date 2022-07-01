// C program for array implementation of stack
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a stack
struct Stack
{
    int top;
    int size;
    int *array;
};

// Function to add an item to stack
void push(struct Stack *stack, int count)
{
    int item;
    if (stack->top == stack->size - 1)
    {
        printf("stack is already full\n");
        return;
    }
    for (size_t i = 0; i < count; i++)
    {
        printf("Enter the value to be pushed: ");
        scanf("%d", &item);
        stack->array[++stack->top] = item;
        printf("%d pushed to stack\n", item);
    }
}

// Function to remove an item from stack
void pop(struct Stack *stack)
{
    if (stack->top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("%d ", stack->array[stack->top--]);
}

//function to print the stack
void display(struct Stack *stack)
{
   
};

// MAIN FUNCTION
int main()
{
    struct Stack *stack = create(100);

    int count;
    printf("Enter the number of values to be pushed: ");
    scanf("%d", &count);
    push(stack, count);

    printf("\nCalling the pop funciton\n");

    pop(stack);
    pop(stack);

    return 0;
}
