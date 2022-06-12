#include <stdlib.h>
#include <stdio.h>


void main()
{
char str[80];
int i=0;
int v,c;
v=c=0;

printf("Enter a sentence: \n");
fgets(str,80,stdin); // break with ^D or ^Z

// int n = strlen(str);


while(str[i] != '\0')
{
    if( (str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122) )
    {
        if( str[i]=='A' || str[i]=='O' || str[i]=='E' || str[i]=='I' || str[i]=='U'
           || str[i]=='a' || str[i]=='o' || str[i]=='e' || str[i]=='i' || str[i]=='u') 
        {
            v++;
        } else {
        c++;
        }

    } 
    i++;    
}

printf("The sentence contains %d vowels and %d consonants.\n", v, c);

}