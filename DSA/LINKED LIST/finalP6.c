#include <stdio.h>
#include <stdlib.h>

// Create a node
typedef struct Node
{
    int data;
    struct Node *next;
} node;

// Insert at the beginning
void insert_start(node **head_ref, int new_data)
{
    // Allocate memory to a node
    node *new_node = (node *)malloc(sizeof(struct Node));

    // insert the data
    new_node->data = new_data;

    new_node->next = (*head_ref);

    // Move head to new node
    (*head_ref) = new_node;
}

// Insert a node after a node
void insert_general(node *head, int prev_node, int new_data)
{

    node *new_node = (node *)malloc(sizeof(struct Node));
    new_node->data = new_data;

    for (size_t i = 0; i < prev_node - 1; i++)
    {
        head = (head)->next;
    }

    new_node->next = (head)->next;
    (head)->next = new_node;
}

// Insert the the end
void insert_end(node **head_ref, int new_data)
{
    node *new_node = (node *)malloc(sizeof(struct Node));
    node *last = *head_ref; /* used in step 5*/

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}

// Delete a node
void delete_node(node **head_ref, int key)
{
    node *temp = *head_ref, *prev;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    // Find the key to be deleted
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // If the key is not present
    if (temp == NULL)
        return;

    // Remove the node
    prev->next = temp->next;

    free(temp);
}

// Print the linked list
void printList(node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}

// Driver program
int main()
{
    node *head = NULL;

    int n, data;
    printf("Enter the element to be inserted at the beginning: ");
    scanf("%d", &data);
    insert_start(&head, data);

    printf("Enter the elements to be inserted at the end: ");
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {

        printf("Enter the data: ");
        scanf("%d", &data);
        insert_end(&head, data);
    }

    printf("enter the position after which element to be inserted followed by the element: ");
    scanf("%d%d", &n, &data);

    insert_general(head, n, data);

    printf("Linked list: ");
    printList(head);

    printf("Enter the postion to delete a node: ");
    scanf("%d", &n);
    delete_node(&head, n);

    printf("\nAfter deleting an element: ");
    printList(head);
}