#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int h, m, s;
    int d =1000;

    printf("Set the time: \n");
    scanf("%d%d%d", &h, &m, &s);
    printf("%d: %d: %d\n",h,m,s);

    if( h>23 || m > 59 || s > 59)
    {
        printf("ERROR: Give correct range\n");
        exit(0);
    }

    while(1)
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>23)
        {
            h=1;
        }

        printf("\n%02d:%02d:%02d",h,m,s);
        Sleep(d);
    }
    // return 0;

}