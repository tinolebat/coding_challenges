#include <stdio.h>
#include <stdlib.h>

#define max 100

void delete(int array[], int size, int pos)
{
    pos--;
    for(int i= pos; i<=size-1;i++)
    {
        array[i] = array[i+1];
    }
    printf("\nArray with deleted position: \n");
    for(int i=0; i<=size-1;i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

}

void insert(int p[], int size, int pos, int k)
{
    pos--;
    //shift element in the array
    for(int j=size-1; j>=pos ; j--)
    {
        p[j+1] = p[j];
    }
    p[pos] =k;
    printf("\nNew Array: \n");
    for(int i=0; i<=size;i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");
}

void main()
{
    int p[max], n,pos,k,del;
    printf("Enter length of the array: \n");
    scanf("%d", &n);
    for(int i=0; i <= n-1; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("\nArray: \n");
    for(int i=0; i<=n-1;i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");

    printf("Give position to be inserted in: \n");
    scanf("%d",&pos);

    printf("Give value to be inserted: \n");
    scanf("%d",&k);
    insert(p,n,pos,k);
    
    printf("Give position to be deleted: \n");
    scanf("%d", &del);
    delete(p,n,del);


    // return 0;
}