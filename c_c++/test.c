#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* newnode(int data, struct Node* nextnode)
{
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->next = nextnode;
    return node;
};

struct Node* makelist(int keys[], int n)
{
    struct Node* Head =NULL;
    struct Node* node =NULL;

    for(int i=n-1; i>=0;i--)
    {
        node = newnode(keys[i],node);
        Head = node;
    }
    return Head;
}

void printList(struct Node* Head)
{
    struct Node* tmp = Head;
    while(tmp)
    {
        printf("%d ",tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}

/*Swap recursive*/
struct Node* swap(struct Node* head)
{
    struct Node *nod;

    if(!head || head->next == NULL)
        return head;
    
    nod = head->next;
    head->next = swap(nod->next);
    nod->next = head;
    return nod;
}

/*swap iterative*/
// struct Node* swap2(struct Node* head)
// {
//     struct Node* nhead, *tmp;
//     if(!head || head->next == NULL)
//       return head;
//     nhead = head->next;
//     head->next = ;



// }

int main(){
    int keys[]={1,2,3,4,5,6};
    int n = sizeof(keys)/sizeof(keys[0]);
    struct Node* listhead;
    struct Node* swapedHead;
    
    listhead = makelist(keys, n);
    printList(listhead);
    swapedHead = swap(listhead);
    printList(swapedHead);
    printf("\n");
    
    return 0;
}