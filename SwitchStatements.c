/*
Rules for switch statements:
   1.switch expression: Must be int or char.
   2.Case value must be a integer or a char.
   3.Case value must come inside switch.
   4.Break is not a must.
*/
#include <stdio.h>
int main()
{
    int a=2;
    switch(a){
        case 3:
        printf("Value is 3.");
        case 2:
        printf("Value is 2");
        break;
        default:
        printf("Nothing matched");
    }
    return 0;
}
