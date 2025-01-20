/*
1.Also called as jump statements in C.
2.Used to transfer program control to a predefined label.
3.It's use is avoided since it causes confusion for the fellow programmers in understanding
    the code.
4.Goto statement is preferable when we need to break multiple loops using a single statement
    the same time.
*/
#include <stdio.h>
int main()
{
    int num;
    for(int i=0;i<8;i++){
        printf("%d",i);
        for(int j=0;j<8;j++){
            printf("Enter a number. Enter 0 to exit:\n");
            scanf("%d",&num);
            if(num==0){
                goto end;
            }
        }
    }
    end:
    return 0;
}
