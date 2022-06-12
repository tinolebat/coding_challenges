#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ifexits(char a[],int counter,char value)
{
    // if(counter == 0) return 0;
    for(int i=0; i< counter;i++)
    {
        if(value == a[i])
        {
            return 1;
        }
    }
    return 0;
}

void main()
{
    char s1[80], s2[80];
    int i;

    printf("Enter a string: \n");
    scanf("%s", s1);
    int l = strlen(s1);
    
    int v = 0;

    for(i=0; i<l; i++)
    {
        if(ifexits(s2,v,s1[i]))
        {
            printf(" %c is the first repetitive character \n",s1[i] );
            break;
        } else{
            s2[v] = s1[i];
            v++;
        }
              
    }
    if(i == l){
        printf("No repetitive character is string %s \n", s1);
    }

    // return 0;
}