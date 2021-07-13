#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};

struct Node* newNode(int data, struct Node* nextnode)
{
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->next = nextnode;
    return node;
}

struct Node* makeList(int keys[],int n)
{
    // struct Node* first= newNode(1);
    // struct Node* second= newNode(2);
    // struct Node* third= newNode(3);
    // struct Node* Head = first;
    // first->next = second;
    // second->next = third;
    // third->next= NULL;

    struct Node* head = NULL, *node = NULL;

    for(int i = n-1; i>=0; i--)
    {
        node = newNode(keys[i], node);
        head = node;
    }

    return head;
}

void printList(struct Node* Head)
{
    struct Node* tmp = Head;
    while(tmp)
    {
        printf("%d->",tmp->data);
        tmp = tmp->next;
    } 
    printf("NULL\n");
}

int main()
{
    int keys[]={2,4,6,8};
    int n = sizeof(keys)/sizeof(keys[0]);
    struct Node* head = makeList(keys, n);
    printList(head);
    printf("\n OK \n");
    return 0;
}