#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Leetcode problem 20(easy): Valid parentheses

struct Stack {
    int top;
    char *str;
};

int isEmpty(struct Stack* stk)
{
    return stk->top == -1;
}

void push(struct Stack* stk, char c)
{
    stk->str[stk->top++] = c;
}

char pop(struct Stack* stk)
{
    return stk->str[stk->top--];
}

bool isMatchingPair(char c1, char c2)
{
    if(c1 == '(' && c2 == ')')
    {
        return 1;
    } else if(c1 == '{' && c2 == '}')
    {
        return 1;
    } else if(c1 == '[' && c2 == ']')
    {
        return 1;
    } else {
        return 0;
    }
}


bool isValid(char *s)
{
    int i =0;
    struct Stack* stack = (struct Stack*) malloc(sizeof(*stack));
    stack->top = -1;
    stack->str = (char *)malloc(sizeof(char));

    while(s[i])
    {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{' )
            stack->str[++stack->top] = s[i];
        
        if(s[i] == ')' || s[i] == ']' || s[i] == '}' )
        {
            if(stack == NULL) 
            {
                return 0;
            } else if(!isMatchingPair(pop(stack), s[i]))
            {
                return 0;
            }
        }
            
        i++;
    }

    if(stack->top != -1)
        return false;

    return true;

}


void main()
{
    char *s;
    s= "(]";
    // char s1= "(]";

    bool result = isValid(s);

    if(result == true){
        printf("\nValid parentheses\n");
    } else{  printf("\nInValid parentheses\n"); }


}