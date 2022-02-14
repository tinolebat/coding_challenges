#include <stdio.h>
#include <stdlib.h>

// using namespace std;

int main(){

   int vector[]={ 10, 40, 55};
   int *p0= vector;
   int *p1= vector+1;
   int *p2=vector+2;

   printf("p2-p0: %ld\n", p2-p0);
   printf("p1 points to value: %d\n",*p1);
    return 0;
}