// A simple CPP program to introduce
// a linked list
#include <iostream>
using namespace std;
class Node {
    public:
        int data;
        Node* next;
};

void printList(Node* n){ 
    while (n != NULL) {
    cout << n->data << " ";
    cout << &n -> data << " ";
    n = n->next;
    }
} 
// Program to create a simple linked
// list with 7 nodes
int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth = NULL;
    Node* fifth = NULL;
    Node* sixth = NULL;
    Node* seventh = NULL;

    // allocate 7 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();
    fifth  = new Node();
    sixth = new Node();
    seventh = new Node();


    head->data = 1; // assign data in 1 node
    head->next = second; // Link first node with

    second->data = 2;
    // Link second node with the 2 node
    second->next = third;

    third->data = 3; // assign data to 3 node
    third->next = fourth;

    fourth->data = 4; // assign data to 4 node
    fourth->next = fifth;

    fifth->data = 5; // assign data to 5 node
    fifth->next = sixth;

    sixth->data = 6; // assign data to 6 node
    sixth->next = seventh;

    seventh->data = 7; // assign data to 7 node
    seventh->next = NULL;

    printList(head); 
    getchar();
    return 0;
}