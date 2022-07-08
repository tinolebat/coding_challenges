#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node * next;
};

struct Node * createNode(int item)
{
    /* data */
    struct Node * n = (struct Node *) malloc(sizeof(struct Node));
    n->data = item;
    n->next = NULL;
}

void addAtHead(struct Node **head, int item)
{
    struct Node * n = createNode(item);
    n->next = (*head);
    (*head) = n;
}

// add to the end
void append(struct Node **head, int item)
{
    struct Node * cur = (*head);

    if((*head) == NULL) return;

    struct Node * n  = createNode(item);

    while(cur->next != NULL)
    {
        cur = cur->next;
    }
    cur->next = n;
}

void insertAt(struct Node **head, int position, int item)
{
    struct Node * n = createNode(item);
    struct Node * cur = *head;
    struct Node * prev;
    for(int i=0; i<position;i++)
    {
        prev = cur;
        cur = cur->next;
    }
    prev->next = n;
    n->next = cur;

}

void deleteAtHead(struct Node **head)
{
    struct Node * tmp = *head;
    *head = (*head)->next;
    free(tmp);
}

void printList(struct Node **head)
{
    struct Node * tmp = *head;
    while(tmp != NULL)
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}

int main()
{

    struct Node * rootnode = createNode(1);
    append(&rootnode, 2);
    append(&rootnode, 4);
    append(&rootnode, 5);
    append(&rootnode, 9);
    append(&rootnode, 10);

    printList(&rootnode);
    printf("\n");

    addAtHead(&rootnode, 0);
    printList(&rootnode);
    printf("\n");

    insertAt(&rootnode,3,99);
    printList(&rootnode);
    printf("\n");

    deleteAtHead(&rootnode);
    printList(&rootnode);
    printf("\n");

    return 0;
}