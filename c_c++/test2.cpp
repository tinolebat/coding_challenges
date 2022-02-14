#include <iostream>
#include <stdio.h>
#include <vector> 

using namespace std;

struct Node
{
    int val;
    Node* next;
    /*Default constructor*/
    // When calling Node(5) for instance, val will be set to 5 and next to NULL
    // Node(int x) : val(x), next(NULL){} 
};

class linkedList{
private:
    Node *head, *tail;
public:
    linkedList(){
        head = NULL;
        tail = NULL;
    }

    void addNode(int value)
    {
        Node *tmp =new Node;
        tmp->val = value;
        tmp->next = NULL;
        if(head== NULL)
        {
            head = tmp;
            tail = tmp;
        } else
        {
            // New node is added at the end of the list
            tail->next=tmp;
            tail = tail->next;
        } 
    }

    void addStart(int value)
    {
        Node *tmp= new Node;
        tmp->val = value;
        tmp->next = NULL;
        if(head ==NULL)
        {
            head = tmp;
            tail = tmp;
        } else
        {
            tmp->next = head;
            head = tmp; //Node tmp becomes the new head
        }
    }

    void insert(int pos, int value)
    {
        Node *tmp =new Node;
        tmp->val = value;
        tmp->next = NULL;

        Node *cur =new Node;
        cur = head;

        for(int i=0;i<pos-1; i++)
        {
            cur = cur->next;
        }
        tmp->next = cur->next;
        cur->next = tmp; 
    }

    void removeEnd()
    {
        Node *tmp = new Node;
        Node *cur = new Node;
        cur = head;

        while(cur->next != NULL)
        {
            tmp=cur;
            cur = cur->next;
        }
        tmp->next = cur->next;
        delete cur;
    }

    void removeRand(int pos)
    {
        Node *tmp = new Node;
        Node *cur = new Node;

        cur = head;

        for(int i=0; i<pos-1;i++)
        {
            tmp = cur;
            cur = cur->next;
        }
        tmp->next = cur->next;
        delete cur;
    }

    void display()
    {
        Node *tmp = new Node;
        tmp = head;

        while(tmp != NULL)
        {
            printf("%d-> ",tmp->val);
            tmp = tmp->next;
        }
        cout <<"NULL\n";
    }

};



int main()
{
    linkedList a;
    a.addNode(10);
    a.addNode(20);
    a.addNode(40);
    a.addNode(50);
    a.addNode(80);
    a.display();

    
    
}