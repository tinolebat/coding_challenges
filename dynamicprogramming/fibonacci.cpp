#include <stdio.h>
#include <stdlib.h>

int fib(int n, int memo[])
{
    if()
    if(n<=2)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main()
{
    int s = fib(9);
    printf("%d\n",s);
    return 0;
}