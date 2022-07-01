#include <stdio.h>
#include <stdlib.h>

// structure to define node
typedef struct node
{
    int data;
    struct node *link;

} node, Node;
// function to create given number of nodes
void createList(node *head, int size)
{
    node *connector;
    connector = head;
    while (size--)
    {
        node *new = (node *)malloc(sizeof(node));
        printf("Enter data: ");
        scanf("%d", &(new->data));
        connector->link = new;
        connector = connector->link;
        // printf("\t%d \n", head->link->link->data);
    }
    connector->link = NULL;
}

void printList(node *head)
{
    node *ptr = head->link;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
};

void reverseList(node *head){
    node *new_head;
    while(head != NULL){
        new_head = head;
        
    }
}

// main function
int main()
{

    node *head = (node *)malloc(sizeof(node));
    createList(head, 5);
    printList(head);

    return 0;
}