// A simple C program to introduce
// a linked list
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
// Program to create a simple linked
// list with 3 nodes
int main(){
    struct Node* head = NULL;
    struct Node* dua = NULL;
    struct Node* tiga = NULL;
    struct Node* empat = NULL;
    struct Node* lima = NULL;
    struct Node* enam = NULL;
    struct Node* tujuh = NULL;

// allocate 3 nodes in the heap

    head = (struct Node*)malloc(sizeof(struct Node));
    dua = (struct Node*)malloc(sizeof(struct Node));
    tiga = (struct Node*)malloc(sizeof(struct Node));
    empat = (struct Node*)malloc(sizeof(struct Node));
    lima = (struct Node*)malloc(sizeof(struct Node));
    enam = (struct Node*)malloc(sizeof(struct Node));
    tujuh = (struct Node*)malloc(sizeof(struct Node));
    

    head->data = 1; // assign data in first node
    head->next = dua; // Link first node with

    dua->data = 2;
    dua->next = tiga;

    tiga->data = 3; // assign data to third node
    tiga->next = empat;
    
    empat->data = 2;
    empat->next = lima;

    lima->data = 2;
    lima->next = enam;

    enam->data = 6;
    enam->next = tujuh;

    tujuh->data = 7;
    tujuh->next = NULL;

    return 0;
}