#include <stdio.h>
#include <stdlib.h>

int * twosum(int* nums, int numsSize, int target) // , int* returnSize
{
    // *returnSize=2;
    int * res = NULL;
    res = (int *)malloc(sizeof(int) * 2);

    for(int i=0; i<numsSize; i++)
    {
        for(int j=i+1; j<numsSize; j++)
        {
            if((nums[i]+nums[j]) == target)
            {
                // res = (int *)malloc(sizeof(int) * 2);
                res[0] = i;
                res[1] = j;
            }
        }
    }
    return res;
}

void main()
{
    int * data = NULL;
    int *returnSize = NULL;
    int size = 4;
    int array[4] = {2,7,11,15};

    data = twosum(array,size,9);

    printf("Return array: \n");
    for(int i = 0; i<2;i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");

    free(data);
}