/*
1.Used to bring the program control out of the loop.
2.The break statement is used inside the loops or switch statement.
*/
#include <stdio.h>
int main()
{
    int i,age;
    for(i=0;i<10;i++){
        printf("%d\n Enter your age\n",i);
        scanf("%d",&age);
        if(age>10){
            break;
        }
    }
    return 0;
}
