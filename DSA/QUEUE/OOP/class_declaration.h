/*#####################################################################################################################*/
/*CLASS NODE FOR CREATING THE DATA POINTS*/

class node
{
public:
    // CLASS DATA MEMBERS DECLARATIONS

    int data;
    node *next;
    node *prev;
};

/*#####################################################################################################################*/
/*QUEUE CLASS*/

class queue
{

private:
    // CLASS DATA MEMBERS DECLARATIONS
    node *front;
    node *rear;
    int size;

public:
    // CLASS MEMBER FUNCTION DECLARATIONS
    queue(int n);
    void display();
    void enqueue();
};
