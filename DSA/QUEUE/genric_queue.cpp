#include <iostream>
using namespace std;

/*//////////////////////////////////////STRUCT NODE////////////////////////////////////*/

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;

/*//////////////////////////////////////creating the head and tail of the queue////////////////////////////////////*/

static int size;
node *rear = nullptr;
node *front = nullptr;

/*//////////////////////////////////////////////////////////////////////////*/

void create(int n);
void enqueue();
// void dequeue();
// void display(void);
void display(void)
{
    node *ptr = front;
    while (ptr != nullptr)
    {
        cout << ptr->data << endl;
        ptr = ptr->prev;
    }
}
// void empty();

int main()
{

    /*//////////////////////////////////////Asking for number of nodes////////////////////////////////////*/

    int n;
    cout << "\nEnter the number of values to be enqued: " << endl;
    cin >> n;

    /*//////////////////////////////////////Creating the queue using the create function////////////////////////////////////*/
    cout << "\nCalling create function\n";
    create(n);

    /*//////////////////////////////////////enque operation////////////////////////////////////*/

    enqueue();

    // /*//////////////////////////////////////dequeue operation////////////////////////////////////*/

    // dequeue();
    // dequeue();
    // dequeue();

    /*//////////////////////////////////////display operation to print queue////////////////////////////////////*/
    cout << "\nCalling the display function\n";
    display();
    return 0;
}

/*#####################################################################################################################*/
/*FUNCTION DECLARATIONS*/

void create(int n)
{
    int data;

    node *temp;

    for (size_t i = 0; i < n; i++)
    {
        cout << "\nEnter the value " << i + 1 << ": ";
        cin >> data;

        temp = new node;
        temp->data = data;
        temp->next = rear;
        i > 0 ? rear->prev = temp : front = temp;
        rear = temp;
    }
}
void enqueue()
{
    int data;
    cout << "\nEnter the new data to be enqued: ";
    cin >> data;

    rear->prev = new node;
    rear->prev->next = rear;
    rear->prev->data = data;
    rear = rear->prev;
}
// void dequeue();

// void empty();
