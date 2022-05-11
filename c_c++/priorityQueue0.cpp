#include <iostream>
#include <limits.h>

using namespace std;
#define MAX 100000

/*Priority queue can be implemented using the following data structures: 

    Arrays, Linked list, Heap data structure, Binary search tree    
------------------------------------------------       
Arrays           | enqueue()  dequeue()   peek()
Time Complexity  |   O(1)       O(n)       O(n)
*/

//  Using array to implement a priority queue

struct item
{
    int value;
    int priority;
};

item pr[MAX];
int size = -1; // Pointer to the last index

void enqueue(int val, int priority)
{
    size++;

    pr[size].value = val;
    pr[size].priority = priority;
 
}

// peek(): get the element of highest priority
int peek()
{
    int highestpriority = INT_MIN;
    int ind = -1;

    // Check for the element with highest priority
    for(int i=0; i <= size; i++)
    {
        // If priority is the same, choose element with highest value
        if(highestpriority == pr[i].priority && ind >-1 && pr[ind].value < pr[i].value)
        {
            highestpriority = pr[i].priority;
            ind = i;
        } else if(highestpriority < pr[i].priority)
        {
            highestpriority = pr[i].priority;
            ind = i;
        }
    }

    return ind;
}

void dequeue()
{
    int ind = peek();

    for(int i = ind; i < size; i++)
    {
        pr[i] = pr[i+1];
    }

    size--;
}


int main()
{

    enqueue(10, 2);
    enqueue(14, 5);
    enqueue(16, 4);
    enqueue(12, 3);

    int ind =peek();
    std::cout << pr[ind].value << endl;

    dequeue();

    ind =peek();
    std::cout << pr[ind].value << endl;

    dequeue();

    ind =peek();
    std::cout << pr[ind].value << " "<< endl;

    return 0;
}