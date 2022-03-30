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

    void display(){
        Node *tmp = new Node;
        tmp= head;
        while(tmp != NULL){
            cout << tmp->data << " " ;
            tmp = tmp->next;
        }
        cout << "\n";
    }

    Node* gethead(){
        return head;
    }

    void display_new(Node * h){
        if(h == NULL){
            cout << "NULL" << endl;
        } else {
            cout << h->data << " ";
            display_new(h->next);
        }
    }

};


int main()
{
    Linkedlist a;
    a.AddAtTail(1);
    a.AddAtTail(2);
    a.AddAtTail(3);
    a.AddAtTail(4);
    a.AddAtTail(5);
    cout << "Display Loop: \n " ;
    a.display();
    cout << "Display Recursion: \n " ;
    a.display_new(a.gethead());
    
    return 0;
}