#include <iostream>
#include <limits.h>

using namespace std;

/*
Maintain 2 pointers: front, rear. 
front points to the 1st item of queue and rear points to the last item.
*/

struct QNode 
{
    int data;
    QNode * next;
    QNode(int d)
    {
        data = d;
        next = NULL;
    }
};

struct Queue
{
    QNode * front, *rear;
    Queue()
    {
        front = rear = NULL;
    }

    void enqueue(int x)
    {
        QNode * tmp = new QNode(x);

        // If queue is empty, new node is both front and rear
        if(rear == NULL)
        {
            front = rear = tmp;
            return;
        }

        // Add new node at the end of queue and change rear
        rear->next = tmp;
        rear = tmp;
    }

    void dequeue()
    {
        if(front == NULL) return;

        QNode * tmp = front;
        front =front->next;

        // If front becomes NULL then change rear to NULL
        if(front == NULL) rear = NULL;
        delete(tmp);
    }
};


int main()
{
    return 0;
}