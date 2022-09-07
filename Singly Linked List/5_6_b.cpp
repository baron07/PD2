// Recursive C++ program to find length
// or count of nodes in a linked list
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node {
public:
	int data;
	Node* next;
};

/* Given a reference (pointer to pointer) to the head
of a list and an int, push a new node on the front
of the list. */
void push(Node** head_ref, int new_data)
{
	/* allocate node */
	Node* new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

//delete node function
void deleteNode(Node** head_ref, int position)
{
 
    // If linked list is empty
    if (*head_ref == NULL)
        return;
 
    // Store head node
    Node* temp = *head_ref;
 
    // If head needs to be removed
    if (position == 0) {
 
        // Change head
        *head_ref = temp->next;
 
        // Free old head
        free(temp);
        return;
    }
 
    // Find previous node of the node to be deleted
    for (int i = 0; temp != NULL && i < position - 1; i++)
        temp = temp->next;
 
    // If position is more than number of nodes
    if (temp == NULL || temp->next == NULL)
        return;
 
    // Node temp->next is the node to be deleted
    // Store pointer to the next of node to be deleted
    Node* next = temp->next->next;
 
    // Unlink the node from linked list
    free(temp->next); // Free memory
 
    // Unlink the deleted node from list
    temp->next = next;
}

/* Recursively count number of nodes in linked list */
int getCount(Node* head)
{
	// Base Case
	if (head == NULL) {
		return 0;
	}
	// Count this node plus the rest of the list
	else {
		return 1 + getCount(head->next);
	}
}

/* Driver program to test count function*/
int main()
{
	/* Start with the empty list */
	Node* head = NULL;

	/* Use push() to construct below list
	1->2->1->3->1 */
	push(&head, 1);
	push(&head, 3);
	push(&head, 1);
	push(&head, 2);
	push(&head, 1);

	//jawaban tugas
	push(&head, 6);
	push(&head, 5);
	push(&head, 3);

	/* Check the count function */
	cout << "Count of nodes is " << getCount(head)<<endl;

	//menghapus node
	deleteNode(&head, 6);
	deleteNode(&head, 5);

	cout << "Count of nodes is " << getCount(head)<<endl;

	return 0;
}