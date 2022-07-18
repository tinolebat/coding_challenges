#include <stdio.h>
#include <stdlib.h>

#define max 100

void main()
{
    int p[max], n;
    int *mx, *ptr;
    printf("Give number of Elements:\n");
    scanf("%d", &n);

    printf("Enter Elements in array:\n");
    for(int i=0; i<n;i++)
    {
        scanf("%d", &p[i]);
    }

    printf("\nElements array:\n");
        for(int i=0; i<n;i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");

    mx = p;
    ptr = p;

    for(int i=0;i<n;i++)
    {
        if(*mx < *ptr)
        {
            mx = ptr;
        }
        ptr++;
    }
    printf("The largest value is : %d.\n",*mx);


}