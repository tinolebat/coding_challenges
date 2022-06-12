#include <stdlib.h>
#include <stdio.h>


void main()
{
char str[80];
int i=0;

printf("Enter a sentence: \n");
fgets(str,80,stdin); // break with ^D or ^Z

// int n = strlen(str);


while(str[i] != '\0')
{
    if( str[i]>=97 && str[i]<=122 )
    {
        if( str[i]=='a' || str[i]=='o' || str[i]=='e' || str[i]=='i' || str[i]=='u') 
        {
            str[i] = str[i] - 32;
        } 
    } 
    i++;    
}

printf("The new sentence uppercase vowels is: \n" );
printf("%s \n", str);

}