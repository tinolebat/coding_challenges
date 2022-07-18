#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

struct Stack {
    int top;
    unsigned capacity;
    int* array;
};

struct Stack* createStack(unsigned capacity)
{
    struct Stack* stk = (struct Stack*) malloc(sizeof(struct Stack));
    stk->top = -1;
    stk->capacity = capacity;
    stk->array = (int*)malloc(capacity *sizeof(int));
    return stk;
}

int isFull(struct Stack* stk)
{
    return stk->top == stk->capacity-1;
}

int isEmpty(struct Stack* stk)
{
    return stk->top == -1;
}

void push(struct Stack* stk, int data)
{
    if(isFull(stk)) return;
    stk->array[++stk->top] = data;
    printf("%d pushed to stack\n", data);
}

int pop(struct Stack* stk)
{
    if(isEmpty(stk)) return INT_MIN;
    return stk->array[stk->top--];
}

int main()
{
    
    int n,digit=0, sum=0, count=0;
    struct Stack* stack = createStack(10);
    printf("Enter a number:\n");
    scanf("%d",&n);
    int value = n;
    printf("\n");

    while(n>0)
    {
        digit = n%10;
        push(stack,digit);
        count++;  
        n = n/10;
    }

    printf("Last-in in the stack: %d\n",stack->array[stack->top]);

    while(!isEmpty(stack))
    {
        int d = pop(stack);
        sum = sum + pow(d,count);       
    }

    if(sum == value)
    {
        printf("\n%d is an Armstrong number\n",value);
    } else {  printf(" NOT an Armstrong number\n"); }

    return 0;

}