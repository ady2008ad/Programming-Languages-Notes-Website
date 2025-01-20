/*
-Loop always executes atleast one time.
Syntax:
   do{
   //Code to be executed
   }while(condition);
*/
#include <stdio.h>
int main()
{
    int i=0;
    do{
        i=i+1;
        printf("%d",i);
    }while(i<10);
    return 0;
}
