/*
1.Used to bring the program control to the next iteration of the loop.
2.The continue statements skips some code inside the loop and continues with the next
    iteration.
3.It is mainly used for a conditon so that we can skip some lines of code for a particular
    conditon.
*/
#include <stdio.h>
int main()
{
    int i,age;
    for(i=0;i<10;i++){
        printf("%d\nEnter your age:\n",i);
        scanf("%d",&age);
        if(age>10){
            continue;
        }
        printf("He is a good boy.");
    }
    return 0;
}
