#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
// class for node of the linked list
//
class Node
{
public:
    int data;
    Node *next;

    Node(int value = 0)
    {
        data = value;
        // next = prev;
    }
};
// class for representing the linked list
class LinkedList
{
public:
    Node *head = NULL;
    int size = 0;
    void _push()
    {
        for (size_t i = 0; i < size; i++)
        {
            Node *temp = new Node(i);
            // temp->data =;
            temp->next = head;
            head = temp;
            // cout << i<<endl;
        }
    }

    LinkedList(int n)
    {
        size = n;
        cout << "Constructor Called for Linked List";
        _push();
    }

    void printList()
    {
        Node *tempref = head;
        while (tempref != NULL)
        {
            cout << tempref->data << " --> ";
            tempref = tempref->next;
        }
        cout << "NULL" << endl;
    }

    float avgDistBwNodes()
    {
        long int distance = 0;
        Node *temp = head;
        for (int i = 0; i < size - 1; i++)
        {
            distance += abs((temp->next) - temp);
            temp = temp->next;
        }
        return distance / size;
    }
    // void reverse(Node **head2)
    // {
    //     Node *new_head, *headx = head;
    //     Node *temp_connector;
    //     while (headx != NULL)
    //     {
    //         Node *temp = head->next;
    //         head->next = new_head;
    //         head = head->next;
    //         new_head = new_head;
    //     }
    // }
    void reverse()
    {

        Node *temp;
        Node *connector;
        while (connector != NULL)
        {
            connector = head->next;
            temp = connector;
            connector = temp->next;cout << "5";
            temp->next = head;
            temp = head;
            head = temp;
        }
    }

    //     Node *current = head;
    //     Node *temp;
    //     Node *connector, *connector_temp;
    //     int i = size;
    //     while (i-- != 1)
    //     {

    //         temp = current->next;
    //         connector_temp = current->next->next;

    //         connector = current->next;
    //         connector->next = current;

    //         connector = connector_temp;
    //         current = temp;
    //     }
    //     head = current;
    // }
};
int main()
{
    int length;
    cin >> length;
    LinkedList List1(length);
    List1.printList();
    List1.reverse();

    List1.printList();

    // LinkedList list2(10cls00);
    // List1.printList();
    // cout << endl
    //      << "Average distance between nodes: "
    //      << List1.avgDistBwNodes();
    return 0;
}