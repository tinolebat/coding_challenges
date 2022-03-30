#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node {
    int data;
    Node *next;
};

class Linkedlist {
private:
    Node *head, *tail;
public:
    Linkedlist(){
        head = NULL;
        tail = NULL;
    }

    void AddAtTail(int val){
        Node *tmp = new Node;
        tmp->data = val;
        tmp->next = NULL;

        if(head == NULL){
            head = tmp;
            tail = tmp;
        } else {
            tail->next = tmp;
            tail = tail->next;
        }
    }

    void AddAtHead(int val){
        Node *tmp = new Node;
        tmp->data = val;
        tmp->next = NULL;

        if(head == NULL){
            head = tmp;
            tail = tmp;
        } else {
            tmp->next = head;
            head = tmp;
        }
    }

    void randAdd(int val, int pos){
        Node *tmp = new Node;
        Node *cur = new Node;
        tmp->data = val;

        cur = head;

        for(int i=0;i <pos; i++){
            cur = cur->next;
        }
        tmp->next = cur->next;
        cur->next = tmp;
    }

    void removeAtTail(){
        Node *prev = new Node;
        Node *cur = new Node;

        cur = head;

        while(cur->next != NULL){
            prev = cur;
            cur = cur->next;
        }
        prev->next = NULL;
        free(cur);
    }

    void removeAtHead(){
        Node *tmp = new Node;
        tmp = head;
        head = head->next;
        free(tmp);
    }

    void remove_rand(int pos){
        Node *prev = new Node;
        Node *cur = new Node;

        cur = head;
        for(int i = 0; i<pos;i++){
            prev = cur;
            cur = cur->next;
        }
        prev->next = cur->next;
        free(cur);
    }

    void display(){
        Node *tmp = new Node;
        tmp= head;
        while(tmp != NULL){
            cout << tmp->data << " " ;
            tmp = tmp->next;
        }
        cout << "\n";
    }

};

void concatenate( struct Node *h1, struct Node *h2){
    

}

int main()
{
    Linkedlist a,b;
    a.AddAtTail(1);
    a.AddAtTail(2);
    a.AddAtTail(3);
    a.display();

    b.AddAtTail(7);
    b.AddAtTail(8);
    b.AddAtTail(9);
    b.display();


}