#include <stdio.h>
#include <stdlib.h>

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

void main()
{
    int p[max], q[max], r[max];
    int size_p, size_q;
    int i=0,j=0,k=0;

    printf("Give arrays' size, for P then Q: \n");
    scanf("%d %d", &size_p, &size_q);

    printf("Populate P: \n");
    populate(p,size_p);
    printf("Populate Q: \n");
    populate(q,size_q);

    printf("Array P: \n");
    display(p,size_p);
    printf("Array Q: \n");
    display(q,size_q);

    while((i<size_p) && (j<size_q))
    {
        if(p[i] < q[j])
        {
            r[k] = p[i];       
            i++;
            k++;

        } else if (q[j] < p[i])
        {
            r[k] = q[j];
            k++;
            j++;
        }else // r[i] == q[j]
        {
            r[k] = p[i];
            k++;
            i++;
            r[k] = q[j];      
            k++;
            j++;
        }  

    }

    while (i<size_p)
    {
        r[k] = p[i];
        k++;
        i++;
    }

    // while (j<size_q)
    // {
    //     r[k] = q[j];
    //     k++;
    //     j++;
    // }

    printf("\n");
    printf("Array new sorted matrix R: \n");
    display(r,k);

}