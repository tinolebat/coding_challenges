#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

struct Listnode{
    int data;
    Listnode * next;
    Listnode() : data(0), next(nullptr){}
    Listnode(int x, Listnode *next) : data(x), next(next) {}

};

class Solution{
    public:
    Listnode* mergeTwoLists(Listnode* l1, Listnode* l2){
        Listnode *t1, *t2;
        Listnode *nxt1 = l1->next;
        Listnode *nxt2= l2->next;
        
        t1 = l1; t2 = l2;
        while (nxt1 && t2)
        {   
            if((t2->data >= t1->data) && (t2->data) <= (nxt1->data) ){
                nxt2 = t2->next;
                t1->next=t2;
                t2->next=nxt1;

                t1=t2;
                t2=nxt2;
            }else {
                if(nxt1->next){
                    nxt1 = nxt1->next;
                    t1 = t1->next;
                } else {
                    nxt1->next = t2;
                    return l1;
                }            
            }                       
        }
        return l1;
    }
};

void display(Listnode *n){

    while (n!=NULL){
        cout << n->data << "\t";
        n = n->next;
    }
    
    cout << "\n";
}

int main(){

    Solution s;

    Listnode *a,*b,*c;
    Listnode *x,*y,*z;
    Listnode *result;
    a = new Listnode; b = new Listnode; c = new Listnode;
    x = new Listnode; y = new Listnode; z = new Listnode;

    c->next=NULL; c->data=5;
    b->next=c; b->data=3;
    a->next=b; a->data=1;

    //----
    
    z->next=NULL; z->data=4;
    y->next=z; y->data=2;
    x->next=y; x->data=0;

    display(a);
    display(x);
    
    if(a->data <= x->data){
        result = s.mergeTwoLists(a,x);
    } else
    {
        result = s.mergeTwoLists(x,a);
    }
    
    display(result); 
    

    return 0;
}