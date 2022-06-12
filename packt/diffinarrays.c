#include <stdio.h>
#include <stdlib.h>

#define max 100

int ifexist(int a[], int counter, int value)
{
    if(counter ==0) return 0;
        for(int i=0; i<=counter;i++)
        {
            if(a[i] == value) return (1);
        }
    return (0);
}

void display(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void diffElements(int p[], int q[], int r[], int size)
{
    int j, count=0;   
    for(int i= 0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            if(p[i] == q[j])
            {
                break;
            }
        }
        if(j == size)
        {
            if(!ifexist(r,count,p[i]))
            {
                r[count] = p[i];
                count++;
            }
        }
    }
    printf("Counter = %d\n", count);

    printf("\nMatrix r: \n");
    display(r,count);
}

void populate(int array[], int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
}

void main()
{
    int p[max], q[max],r[max];
    int size,count;
    int j;
    count=0;
    printf("give array size: \n");
    scanf("%d", &size);
    printf("populate matrix p:\n");
    populate(p,size);

    printf("populate matrix q: \n");
    populate(q,size);

    printf("\nmatrix p: \n");
    display(p,size);
    printf("\nmatrix q: \n");
    display(q,size);
    printf("\n");

    printf("\nmatrix r BEFORE: ");
    display(r,5);

    diffElements(p,q,r,size) ; 

}