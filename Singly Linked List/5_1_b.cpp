// A simple CPP program to introduce
// a linked list
#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
};
// Program to create a simple linked
// list with 3 nodes
int main(){
    Node* head = NULL; 
    Node* second = NULL; 
    Node* third = NULL;
    Node* fourth = NULL;
    Node* fifth = NULL;
    Node* sixth = NULL;
    Node* seventh = NULL;

    // allocate 3 nodes in the heap 
    head = new Node();
    second = new Node(); 
    third = new Node();

    head->data = 1; // assign data in first node
    head->next = second; // Link first node with second

    second->data = 2; // assign data to second node 
    second->next = third;

    third->data = 3; // assign data to third node 
    third->next = fourth;

    fourth->data = 5; // assign data to fourth node
    fourth->next = fifth;

    fifth->data = 6; // assign data to fifth node
    fifth->next = sixth;

    sixth->data = 7; // assign data to sixth node
    sixth->next = NULL;

    seventh->data = 7; // assign data to seventh node
    seventh->next = NULL;

    return 0;
}