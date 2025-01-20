/*
Pointers in C:
    1.Variable which stores the address of another variable.
    2.Can be of type int, char, array, functions etc.
    3.Can be declared using'*'(arterisk symbol).
    4.The address of operator '&' returns the address of a variable.
    5.'*' is the dereference operator(also called indirection operator) used to get the value
        of a given address.
Null pointer:
    -Pointer is not assigned any value but NULL.
    -int *ptr=NULL;
*/
#include <stdio.h>
int main()
{
    int a = 7;
    int *ptra = &a;
    printf("Value of a is %d\n", *ptra);
    return 0;
}
