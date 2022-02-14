#include <stdio.h>
#include <stdlib.h>


void main()
{
    char str[255], *ptr1, *ptr2, tmp; 
    
    printf("Enter a string:\n");
    scanf("%s",str);
    printf("\nString is: %s\n", str);
    ptr1 = str;

    int n=1;
    while (*ptr1 != '\0')
    {
        ptr1++;
        n++;
    }

    ptr1--;
    ptr2 = str;
    int m=1;
    while (m<=n/2)
    {
        tmp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = tmp;
        ptr1--;
        ptr2++;
        m++;
    }

    printf("Reverse string is: %s\n", str);

}