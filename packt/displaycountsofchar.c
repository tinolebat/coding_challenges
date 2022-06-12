#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int ifexists(char array[],int value, int counter, int count[])
{
    int i;
    for(i=0; i < counter ;i++)
    {
        if(value == array[i])
        {
            count[i]++;
            return 1;
        }
    }
    return 0;
}

void main()
{
    char str[80], chr[80];
    int count[80];
    int i,k=0;

    printf("Enter string: \n");
    scanf("%s", str);
    int l =strlen(str);

    chr[0] = str[0];
    count[0] = 1;

    for(i=1;i<l;i++)
    {
        if(!ifexists(chr,str[i],k,count))
        {
            k++;
            chr[k] = str[i];
            count[k] = 1;
        } 
    }

    printf("Counts of each characters: \n");
    for(int i=0;i<=k;i++)
    {
        printf("Letter %c --> %d time(s)\n", chr[i], count[i]);
    }
    printf("\n");
}