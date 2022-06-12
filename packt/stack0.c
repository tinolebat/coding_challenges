#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// 1st implementation of stack

struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};

struct Stack* createStack(unsigned capacity)
{
    struct Stack* stk = (struct Stack*) malloc(sizeof(struct Stack));
    stk->top = -1;
    stk->capacity = capacity;
    stk->array = (int*)malloc(stk->capacity * sizeof(int));
    return stk;
};

int isFull(struct Stack* stack)
{
    return stack->top == stack->capacity-1;
}

int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}

void push(struct Stack* stack, int item)
{
    if(isFull(stack)) return;
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

int pop(struct Stack* stack)
{
    if(isEmpty(stack)) return INT_MIN;
    return stack->array[stack->top--];

}

void main()
{
    struct Stack* stack = createStack(100);

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 50);

    printf("%d popped from stack\n\n", pop(stack));
    printf("Last element of the stack: %d\n\n", stack->array[stack->top]);

    printf("Stack elements: \n");
    while(stack->top != -1)
    {
        printf("%d ", stack->array[stack->top]);
        stack->top--;
    }
    printf("\n");

}