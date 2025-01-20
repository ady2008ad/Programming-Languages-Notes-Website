/*
Arrays in C:
    1.An array is collection of data items of same type.
    2.Items are stored at contiguous memory locations.
    3.It can also store the collection of derived data types, such as pointers,structures etc.
    4.A one-dimensional array is like a list.
    5.A two-dimensional array is like a table.
    6.In C language places no limit on the number of dimensions in an array.
    7.Some texts refer to one-dimensional arrays as vectors, two-dimensional arrays as matrices
        and use the general term arrays when the no. of dimensions is unspecified or unimportant.
Why do we need Arrays?
    -Code that uses arrays is sometimes more organized and readable.
    -If you were to store the marks in a test of 56 students, creating 56 variable will make
        program look cluttered and messy.
    -Solution to this is arrays.
    -We can create arrays of integers and store the conseucative marks corresponding to roll
        number in the array.
Advantages of Array:
    1.It is used to represent multiple data items of same type by using only single name.
    2. Accessing an item in a given array is very fast.
    3.2-dimensional arrays make it easy in mathematical applications as it is used to represent
        a matrix.
Properties of Array:
    1.Data in an array is stored in contiguous memory locations.
    2.Each element of an array is of same size.
    3.Any element of the array with given index can be accessed very quickly by using it's
        address which can be calculated using the base address of the index.
Syntax for declaring and intializing an array:
    -Data_type name[size];
    -Data_type name[size]={x,y,z,_ _ _ };//size not required in this case.
    -Data_type name[rows][columns];//for 2-D arrays.
    -We can also intialize the array one by one by accessing it using it's index.
        name[0]=0;
Examples:
    1.int main()
    {
    int marks[4];
    marks[0]=34;
    printf("Marks of student 1 is %d\n",marks[0]);
    marks[0]=4;
    marks[1]=24;
    marks[2]=34;
    marks[3]=44;
    printf("Marks of studen 1 is %d\n"marks[0])
    return 0;
    }
    2.int main()
    {
    int marks[4];
    for(int i=0;i<4;i++){
    printf("Enter the value of %d element of the array\n",i);
    scanf("%d",&marks[i]);
    }
    for(int i=0;i<4;i++){
    printf("The value of %d element of the array is %d\n",i,marks[i]);
    }
    return 0;
    }
    3.int main()
    {
    int marks[4]={45,234,2,3};
    for(int i=0;i<4;i++){
    printf("The value of %d element of the array is %d\n",i,marks[i]);
    }
    return 0;
    }
    4.int main()
    {
    int marks[2][4]={{45,234,2,3},
                     {3,2,3,3}};
    for(int i=0;i<2;i++){
    for(int j=0;j<4;j++){
    printf("The value of %d,%d element of the array is %d\n",i,j,marks[j]);
    }
    }
    return 0;
    }
*/
#include <stdio.h>
int main()
{
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of the array\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d\n", i, marks[i]);
    }
    return 0;
}
