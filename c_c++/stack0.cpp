#include <iostream>
#include <limits.h>

using namespace std;

#define SIZE 100

// Implementation of STACK using 1-D Array
class STACK
{
    private:
        int num[SIZE];
        int top;
        
    public:
        STACK();
        int push(int);
        int pop();
        // int peek();
        void display();
        int isFull();
        int isEmpty();
};

STACK::STACK() //Initialize Top to -1
{
    top = -1;
}

int STACK::isEmpty()
{
    return top == -1;
}

int STACK::isFull()
{
    return top == (SIZE - 1);
}

int STACK::pop()
{
    if(isEmpty()) return INT_MIN;
    return num[top--];
}

int STACK::push(int n)
{
    if(isFull())  return -9999;

    num[++top] = n;  
    return n;
}

void STACK::display()
{
    for(int i = top; i>=0; i--)
    {
        std::cout << num[i] << " ";
    }
    std::cout << endl;  
}



int main()
{

    STACK stk;
    int tmp =0;
    tmp = stk.push(10);
    if(tmp==-9999)
        cout<<"STACK OVERFLOW - STACK IMPLEMENTATION ERROR"<<endl;
    else
        cout<<tmp<<" inserted."<<endl;

    tmp = stk.push(20);
    if(tmp==-9999)
        cout<<"STACK OVERFLOW - STACK IMPLEMENTATION ERROR"<<endl;
    else
        cout<<tmp<<" inserted."<<endl;

    tmp = stk.push(30);
    if(tmp==-9999)
        cout<<"STACK OVERFLOW - STACK IMPLEMENTATION ERROR"<<endl;
    else
        cout<<tmp<<" inserted."<<endl;

    tmp = stk.push(40);
    if(tmp==-9999)
        cout<<"STACK OVERFLOW - STACK IMPLEMENTATION ERROR"<<endl;
    else
        cout<<tmp<<" inserted."<<endl;
    tmp = stk.push(50);
    if(tmp==-9999)
        cout<<"STACK OVERFLOW - STACK IMPLEMENTATION ERROR"<<endl;
    else
        cout<<tmp<<" inserted."<<endl;

    std::cout << "Display Stack:\n";
    stk.display();
    tmp = stk.pop();
    cout<< tmp <<" was popped from stack"<<endl << endl;

    std::cout << "Display New Stack:\n";
    stk.display();




    return 0;
}