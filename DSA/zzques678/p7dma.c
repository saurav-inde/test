#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    int next;
    int prev;
} node;

node *top = NULL;

// function to push the new element to the stack
void push(node *top, int data)
{

    node *ptr = top;

    while (ptr != NULL)
    {
        ptr = ptr->next;
    }

    node *temp = (node *)malloc(sizeof(node));
    
    temp->data = data;
    temp->next = NULL;

    top = temp;
}

// function to delete i.e. pop the top element of the stack
void pop(node *top)
{
    if (top == NULL)
    {
        printf("Underflow!\n");
        return;
    }

    printf("%d \n",top->data);
    node *temp = top;
    
}

int main()
{

    return 0;
}