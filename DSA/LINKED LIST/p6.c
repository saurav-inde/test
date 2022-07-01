#include <stdio.h>
#include <stdlib.h>

// structure for the node
struct node
{
    int data;
    struct node *next;
};

//function to push at the beginning
void push_start(struct node **head_ref, int new_data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

//function to push at the end
void push_end(struct node **head_ref, int new_data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    if (ptr == NULL)
    {
        printf("\n Overflow");
    }
    else
    {
        ptr->data = new_data;
        if (*head_ref == NULL)
        {
            ptr->next = NULL;
            *head_ref = ptr;
        }
        else
        {
            temp = *head_ref;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
        }
    }
}

//function to find the length of the linked list
int find_len(struct node *node)
{
    int size = 0;
    while (node != NULL)
    {
        node = node->next;
        size++;
    }
    return size;
}

//function to push in general
void push_general(struct node **head_ref, int data, int pos)
{
    int size = find_len(*head_ref);
    if (pos < 1 || size < pos)
    {
        printf("Cant Insert, %d is not a valid position \n", pos);
    }
    else
    {
        struct node *temp = *head_ref;
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = NULL;
        while (--pos)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

//functio to delete a node
void deleteNode(struct node **head_ref, int key)
{
    struct node *temp = *head_ref, *prev;
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;

    prev->next = temp->next;

    free(temp);
}

//function to print the list on the screen
void display(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf(" \n");
}

int main()
{
    int n, i;
    printf("Enter number of nodes at start: ");
    scanf("%d", &n);
    struct node *head;
    for (i = 1; i <= n; i++)
    {
        int num;
        printf("Enter the values of linked list %d : ", i);
        scanf("%d", &num);
        push_end(&head, num);
    }
    //calling the display function
    display(head);
    
    int insert_head, insert_end, insert_position, pos, delete_node;\
    printf("Enter the value to be inserted at the begining : ");
    scanf("%d", &insert_head);

    push_start(&head, insert_head);
    display(head);

    printf("Enter the value to be inserted at the end : ");
    scanf("%d", &insert_end);
    push_end(&head, insert_end);
    display(head);

    printf("Enter the value (first) to be inserted at the position : ");
    scanf("%d %d", &insert_position, &pos);
    push_general(&head, insert_position, pos);
    display(head);
    
    printf("Enter the value to be deleted : ");
    scanf("%d", &delete_node);
    deleteNode(&head, delete_node);
    display(head);

    return 0;
}