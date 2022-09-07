#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insertAfter(Node* prev_node, int new_data)
{
    if(prev_node == NULL)
    {
        cout << "the given precious";
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data; 
    new_node->next = prev_node->next; 
    prev_node->next = new_node; 
}

void append(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    Node *last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while(last->next != NULL)
        last= last->next;

    last->next = new_node;
    return;
}

void printList (Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next ;
    }
}

int main ()
{
    Node* head = NULL;

    append(&head,6); // output 6->null
    push(&head,7);// output 7->6->null
    push(&head,1);// output 1->7->6->null
    append(&head,4);// output 1->7->6->4->null
    insertAfter(head->next,8); // output 1->7->8->6->4->null

    //jawaban soal
    insertAfter(head->next ,8);
    insertAfter(head->next ,9);

    cout << "Created Linked list is: ";
    printList(head);
    getchar();
    return 0;
}