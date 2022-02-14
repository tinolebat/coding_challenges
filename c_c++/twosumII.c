

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    
    *returnSize = 2;
    int * res = (int*)malloc(sizeof(int) * 2);
    
    for(int i=0; i<numbersSize;i++)
    {
        for(int j=i+1; j<numbersSize;j++)
        {
            if( numbers[i] + numbers[j] == target)
            {
                res[0] = i+1;
                res[1] = j+1;
            }
        }
    }
    return res;
}