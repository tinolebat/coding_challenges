#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// Implementing queue with an Array using class

// For implementing queue, we need to keep track of two indices, front and rear

class Queue {
    public:
        int front, rear, size;
        unsigned capacity;
        int * array;
};

// Create a Queue
Queue * createQueue(unsigned capacity)
{
    Queue* queue = new Queue();
    queue->capacity = capacity;
    queue->front = queue->size = 0;

    // Next is very important, pay attention in enqueue()
    queue->rear = capacity-1;
    queue->array = new int[queue->capacity];
    return queue;
}

int isQueueFull(Queue * q)
{
    return (q->size == q->capacity);
}

int isQueueEmpty(Queue * q)
{
    return (q->size == 0);
}

void enqueue(Queue * q, int item)
{   
    if(isQueueFull(q)) return;
    q->rear = (q->rear+1) % q->capacity; // Circular manner: 
    q->array[q->rear] = item;
    q->size = q->size+1;
    cout << item << " enqueued to queue\n";
}

int dequeue(Queue * q)
{
    if(isQueueEmpty(q)) return INT_MIN;
    int item = q->array[q->front];
    q->front = (q->front + 1) % q->capacity; // Circular manner
    q->size = q->size-1;
    return item;
}

int front(Queue * q) //Get the front of queue
{
    if(isQueueEmpty(q)) return INT_MIN;
    return q->array[q->front];
}

int rear(Queue * q)
{
    if(isQueueEmpty(q)) return INT_MIN;
    return q->array[q->rear];
}

int main()
{
    Queue * queue = createQueue(100);
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50);

    std::cout << dequeue(queue) << " dequeued from queue\n" <<endl;;
 
    std::cout << "Front item is " << front(queue) << endl;
    std::cout << "Rear item is " << rear(queue) << endl;

    return 0;
    
}