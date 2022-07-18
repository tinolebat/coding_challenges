#include <stdio.h>
#include <stdlib.h>

#define max 10

void populate(int a[], int n)
{
    for(int i=0; i<=n; i++)
    {
        scanf("%d",&a[i]);
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

// Check if "value" already exists in resulting array
int ifexist(int a[],int counter, int value)
{
    if(counter ==0) return 0;
    for(int i=0; i<counter;i++)
    {
        if(value == a[i]) return 1;     
    }
    return 0;
}

int commonElement(int a[], int b[], int m[])
{
    int c=0;
    for(int i=0; i<5;i++)
    {
        for(int j=0; j<5;j++)
        {
            if(a[i] == b[j])
            {
                if(!ifexist(m,c,a[i]))
                {
                    m[c] = a[i];
                    c++;
                }
            } 
        }
    }
    return c;
}



void main()
{
    int p[max],q[max],r[max];
    int count=0;
    printf("populate matrix p:\n");
    populate(p,5);

    printf("populate matrix p: \n");
    populate(q,5);

    printf("\nmatrix p: \n");
    display(p,5);
    printf("\nmatrix q: \n");
    display(q,5);
    printf("\n");

    count= commonElement(p,q,r); 

    printf("\nmatrix r: \n");
    display(r,count);


}