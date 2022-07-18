#include <stdio.h>
#include <stdlib.h>

#define MAX 5

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b; 
    *b = t;
    
}

void display(int* array)
{
    printf("%ld \n", (sizeof(array)/array[0]));
    for(int i=0; i<MAX; ++i) //(sizeof(array)/array[0])
    {
        printf("%d ", array[i]);
        
    }
    printf("\n");
}

int main()
{ 
    int arr[MAX] = {1,5,3,7,2};
    int t;
   

    display(arr);

    for(int i=0; i<MAX; ++i)
    {
        for(int j=i+1; j<MAX; ++j)
        {
            if(arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }

    display(arr);

    return 0;
}