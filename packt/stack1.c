#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

// Stack with Linked list

struct Node
{
    int data;
    struct Node* next;  
};

struct Node* newNode(int data)
{
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node -> data = data;
    node -> next = NULL;
    return node;
}

int isEmpty(struct Node* root)
{
    return !root;
}

void push(struct Node** root, int data)
{
    struct Node* stacknode = newNode(data);
    stacknode->next = *root;
    *root = stacknode;
    printf("%d pushed to stack\n", data);
}

int pop(struct Node** root)
{
    if(isEmpty(*root)) return INT_MIN;
    struct Node* tmp = *root;
    *root = (*root)->next;
    int popped = tmp->data;
    free(tmp);
    return popped;
}

int peek(struct Node* root)
{
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}

void main()
{
    struct Node* stack = NULL;
    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    push(&stack,50);

    printf("\nLast-in: %d\n",stack->data);

    printf("%d popped from stack\n",pop(&stack));

    printf("New Last-in: %d\n",stack->data);


    // printf("Stack elements");



}