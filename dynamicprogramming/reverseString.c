#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <iostream>

/********* Iterative method   *****/
// void resverseString(char str[])
// {
//     int l = strlen(str);
//     printf("lenght = %d\n",l);
//     for(int i=strlen(str);i >= 0; i--)
//     {
//         printf("%c", str[i]);
//     }
// }

/* Recursive method */
void reverseString2(const char *str){
    if(!*str)
    {
        return;
    }
    reverseString2(str + 1);
    printf("%c", *str);
}

/* In place methode */
void reverseString3(char *c, int size)
{
    
    // size= strlen(c);
    for(int i=0; i<=((size-2)/2);i++)
    {
        char tmp = c[i];
        c[i] = c[size-1-i];
        c[size-1-i] = tmp;
        printf("%c",c[i]);
    }
    // printf("%c",*c);
}

int main()
{
    char s[5] = "hello";
    char s2[10] = {'h','e','l','l','o'};
    // char s3[5] = {"h","e",l,"l","o"};
    // resverseString(s);
    reverseString2(s);
    printf("\n");
    reverseString3(s,10);
    printf("\n");

    return 0;
}