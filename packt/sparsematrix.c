#include <stdlib.h>
#include <stdio.h>

/* A matrix is considered sparse when it has more zero values than non-zero values
(and dense when it has more non-zero values). In this recipe, we will learn how to
find out whether the specified matrix is sparse*/

#define max 100

void populateMatrix(int (*array)[100], int r, int c)
{
    int v;
   for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d ",&array[i][j]);
        }
    }
    printf("\n");
}

void displayMatrix(int (*a)[100], int r, int c)
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int iszero(int val)
{
    if(val ==0) 
        return 1;
    return 0;
}

void main()
{
    int matrix[max][max];
    int row,col,counter=0;
    printf("Give matrix size. Row then column: \n");
    scanf("%d %d", &row, &col);

    printf("Populate matrix: \n");
    populateMatrix(matrix,row,col);

    printf("Matrix : \n");
    displayMatrix(matrix,row,col);

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(iszero(matrix[i][j]))
            {
                counter++;
            }
        }
    }

    if(counter > ((row * col)/2))
    {
        printf("Matrix is sparsed\n");
        printf("There are %d zeros\n", counter);
    }
    else{
        printf("Matrix is not sparsed\n");
    }
}