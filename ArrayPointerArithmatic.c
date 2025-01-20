/*
Arrays and Pointer Arithmatic in C:
    -Four arithmatic operations can be used on pointers:++,--,+,_
    -int main()
    {
    char a='3';
    char *a=&a;
    printf("%d\n",ptra);
    ptra++;
    printf("%d\n",ptra);
    printf("%d\n",ptra+2);
    }
    -Arrays, by itself, without index subscripting, can be assigned to an integer pointer.
    -int arr[10];
    arr[i]==*(arr+i)
    -If arr is a pointer to arr[0] then arr+i is a pointer to arr[i]
*/
#include <stdio.h>
int main()
{
    int arr[] = {2, 7, 5, 90, 45};
    printf("Value at position 3 is %d\n", arr[3]);
    printf("Address of first element is %d\n", &arr[0]);
    printf("Address of first element is %d\n", arr);
    printf("Address of second element is %d\n", &arr[1]);
    printf("Address of second element is %d\n", arr + 1);
    printf("Value of first element is %d\n", *(&arr[0]));
    printf("Value of first element is %d\n", arr[0]);
    printf("Value of first element is %d\n", *(arr));
    printf("Value of second element is %d\n", *(&arr[1]));
    printf("Value of second element is %d\n", arr[1]);
    printf("Value of second element is %d\n", *(arr + 1));
    return 0;
}
