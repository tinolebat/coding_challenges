#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayCharArray(char arr[], int size)
{
    for(int i=0; i<size;i++)
    {
        printf("%s ",arr);
    }
    printf("\n");
}


void main()
{
    char str[80], rev[80];
    int n,x=0;

    printf("Enter a string: \n");
    scanf("%s",str);
    printf("Str: %s\n",str);

    n = strlen(str);

    for(int i=n-1; i>=0;i--)
    {
        rev[x] = str[i];
        x++;
    }
    rev[x] = '\0';

    printf("Rev: %s\n",rev);
    
    if(strcmp(str,rev)==0)
    {
        printf("String is a Palindrome\n");
    } else {
        printf("String is Not a Palindrome\n");
    }

}