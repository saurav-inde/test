#include <stdio.h>
#include <stdlib.h>

/*//////////////////////////////////////STRUCT NODE////////////////////////////////////*/

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;

/*//////////////////////////////////////creating the head and tail of the queue////////////////////////////////////*/

static int size;
node *rear = NULL;
node *front = NULL;

/*//////////////////////////////////////////////////////////////////////////*/


void enqueue();
void dequeue();

void display(void)
{
    node *ptr = front;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->prev;
    }
}

int main()
{

    /*//////////////////////////////////////Asking for number of nodes////////////////////////////////////*/

    int n;

    printf("\nEnter the number of values to be enqued: ");
    scanf("%d", &n);

    /*//////////////////////////////////////Creating the queue using the create function////////////////////////////////////*/
    printf("\nCalling create function\n");
    // printf << "\nCalling create function\n";
    enqueue(n);

    // /*//////////////////////////////////////dequeue operation////////////////////////////////////*/

    printf("Calling the dequeue operation\n");
    dequeue();
    dequeue();
    dequeue();

    /*//////////////////////////////////////display operation to print queue////////////////////////////////////*/

    printf("\nCalling the display function\n");

    display();
    return 0;
}

/*#####################################################################################################################*/
/*FUNCTION DECLARATIONS*/

void enqueue(int n)
{
    int data;

    node *temp;

    for (size_t i = 0; i < n; i++)
    {
        printf("\nEnter the value %d: ", i + 1);
        scanf("%d", &data);

        temp = (node *)malloc(sizeof(node));
        temp->data = data;
        temp->next = rear;
        if (i > 0)
        {
            (rear->prev = temp);
        }
        else
            front = temp;
        rear = temp;
    }
}

void dequeue()
{
    printf("%d\n", front->data);
    node *temp = front;
    front = front->prev;
    front->next = NULL;
    free(front);
}
