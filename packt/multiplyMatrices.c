#include <stdio.h>
#include <stdlib.h>



void main()
{
    int matA[2][3], matB[3][4], res[2][4];

    //Populate matrix A
    printf("Populate matrix A: \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&matA[i][j]);
        }
    }

    //Display matrix A
    printf("\n matrix A\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",matA[i][j]);
        }
        printf("\n");
    }

    //Populate matrix B
    printf("Populate matrix b: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&matB[i][j]);
        }
    }

    // display matrix B
    printf("\n matrix B\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d",matB[i][j]);
        }
        printf("\n");
    }

    // multiply
    for(int i =0; i<2;i++)
    {
        for(int j=0; j<4;j++)
        {
            res[i][j] = 0;
            for(int k=0; k<3;k++)
            {
                res[i][j] = res[i][j] + matA[i][k] + matB[k][j];
            }
        }
    }

    // print final matrix
    printf("\nResulting matrix\n");
    for(int i =0; i<2;i++)
    {
        for(int j=0; j<4;j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }


}