#include <stdio.h>
#include <stdlib.h>

// find the unique elements in an array, such that the
// repetitive elements in the array will be displayed only once.

#define max 100

void populate(int array[], int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
}

void display(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int ifexist(int target[], int count, int value)
{
    if(count ==0) return 0;
        for(int i=0; i<=count; i++)
        {
            if(target[i] == value) return 1;
        }
    return 0;
}


void main()
{
    int p[max], q[max];
    int size,k;
    printf("Give array size: \n");
    scanf("%d",&size);

    printf("Populate array p:\n");
    populate(p,size);
    printf("Array P: \n");
    display(p,size);

    q[0] = p[0];
    k=1;

    for(int i=1;i<size;i++)
    {
        if(!ifexist(q,size,p[i]))
        {
            q[k] = p[i];
            k++;
        } 
    }

    printf("k = %d\n", k);
    printf("Target array q: \n");
    display(q,k);

}