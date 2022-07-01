#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;

node *top = NULL;
node *bottom = NULL;
// push function to push the data in to the stack
void push()
{
    node *temp = (node *)malloc(sizeof(node));
    printf("Enter the data to be pushed: ");
    scanf("%d", &temp->data);

    if (top == NULL)
    {
        temp->prev = NULL;
        top = temp;
        bottom = top;

        return;
    }

    temp->prev = top;
    top->next = temp;
    top = temp;
}
// pop function to pop the data
void pop()
{
    if (top == NULL)
    {
        printf("The stack is empty!!\n");
        return;
    }

    printf("The top element of the stack is %d :", top->data);
    top = top->prev;
    free(top->next);
    top->next = NULL;
}

void display()
{
    node *ptr = top;
    printf("\nPrinting the stack\n");
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->prev;
    }
}

int main()
{
    int n;
    printf("\nEnter the number of elemenets to be pushed in the stack\n");
    scanf("%d", &n);

    for (size_t i = 0; i < n; i++)
    {
        push();
    }
    display();

    printf("\nEnter the number of elements to be popped\n");
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        pop();
    }

    display();

    return 0;
}