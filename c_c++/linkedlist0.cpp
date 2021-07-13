#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

struct node{
    int data;
    node * next;
};

class linkedlist{
private:
    node *head, *tail;
public:
    linkedlist(){
        head =NULL;
        tail =NULL;
    }

    void add_node(int value){
        node *tmp = new node;
        tmp->data = value;
        tmp->next = NULL;
        if(head == NULL){
            head = tmp;
            tail = tmp;
        }else{
            tail->next= tmp;
            tail =tail->next;
        }
    }

    void add_start(int value){
        node *tmp = new node;
        tmp -> data = value;
        if(head ==NULL){
            head = tmp;
            tail = tmp;
        }else{
            tmp->next = head;
            head = tmp;
        }
    }

    void rand_add(int value, int pos){
        node *tmp = new node;
        node *cur = new node;
        tmp -> data = value;
        
        cur = head;
       
        for(int i=0; i<pos-1; i++){
            cur= cur->next;   
        }
        tmp->next = cur->next;
        cur->next = tmp;  
    }

    void remove_end(){
        node *tmp = new node;
        node *cur = new node;
        cur = head;

        while(cur->next != NULL){
            tmp = cur;
            cur = cur->next;
        }
        tmp-> next = NULL;
        delete cur;
    }

    void remove_rand(int pos){
        node *tmp= new node;
        node *cur = new node;
        cur = head;

        for(int i=0; i<pos-1; i++){
            tmp= cur;
            cur = cur -> next;
        }
        tmp->next = cur->next;
        delete cur;   
    }

    void display(){
        node *tmp = new node;
        tmp = head;
        while(tmp != NULL){
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
        cout << "\n";
    }
};


int main(){
    linkedlist a;
    a.add_node(1);
    a.add_node(2);
    a.add_node(3);
    a.add_node(4);
    a.add_node(5);
    a.display();
    a.remove_rand(3);
    // a.remove_end();
    // a.rand_add(100,2);
    // a.add_start(4);
    // a.add_start(5);
    a.display();

    return 0;
}