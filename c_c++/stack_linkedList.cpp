#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node 
{
    int data;
    Node * next;
};
struct Node* top =NULL;

// struct Node * newNode(int val)
// {
//     struct Node* node = (struct Node *) malloc(sizeof(struct Node));
//     node->data = val;
//     node->next = top;
//     return node;
// }

int isEmpty() //(struct Node* root)
{  
    return !top;
}

void push(int val) 
{
    struct Node* stacknode = (struct Node *) malloc(sizeof(struct Node));
    stacknode->data = val;
    stacknode->next = top;
    top = stacknode;
} 

void pop()
{
    if(isEmpty()) return ;
    Node * tmp = new Node();
    tmp = top;
    top = top->next;
    free(tmp);
}

void display()
{
    Node* tmp;
    if(isEmpty()) return ;
    tmp = top;
    while(tmp!=NULL)
    {
        std::cout << tmp->data << "-> ";
        tmp = tmp->next;
    }
    std::cout << endl;
}

int peek() // return the top most element
{
    if(isEmpty()) exit(1);
    return top->data;
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    display();
    peek();
    display();


    return 0;
}