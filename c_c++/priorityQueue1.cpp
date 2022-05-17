#include <iostream>
#include <limits.h>

using namespace std;

//  Using Linked list
/* 
   Linked List:       push() | pop() | peek()
   Time Complexity:    O(n)  |  O(1) |  O(1)
 */

/* The entries are sorted in a descending order based on their priority */

typedef struct node
{
    int data;
    int priority;     // Lower values indicate higher priority
    node * next;
} Node;

Node * createNode(int val, int p)
{
    Node * tmp = new Node();
    tmp->data = val;
    tmp->priority = p;
    tmp->next = NULL;

    return tmp;
}

int peek(Node** head)
{
    return (*head)->data;
}

void pop(Node** head)
{
    Node * tmp = (*head);
    (*head) = (*head)->next;
    delete(tmp);
}

void push(Node** head, int val, int p)
{
    Node * start = (*head);
    Node * tmp = createNode(val, p);

    if((*head)->priority > p)
    {
        // Insert New Node before head
        tmp->next = (*head);
        (*head) = tmp;
    } else 
    {
        // Traverse the list and find a position to insert new node
        while(start->next !=NULL && start->next->priority < p)
        {
            start = start->next;
        }

        tmp->next = start->next;
        start->next = tmp;

    }
}

int isEmpty(Node** head)
{
    return (*head) == NULL;
}

int main()
{
    Node * pQueue = createNode(4,1);
    // Lower values indicate higher priority
    push(&pQueue, 5, 2);
    push(&pQueue, 6, 3);
    push(&pQueue, 7, 0);

    while (!isEmpty(&pQueue))
    {
        std::cout << " " << peek(&pQueue);
        pop(&pQueue);
        
    }
    std::cout << "\n";
    
    return 0;
}