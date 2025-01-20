/*
Syntax:
  for(expression1;expression2;expression3){
  //Code to be run
  }
Properties of expression 1:
  1.The expression represents the intialization of the loop variable.
  2.We can intialize more than one variable in expression 1.
  3.Expression 1 is optional.
Properties of expression 2:
  1.It is a conditional expression. It checks for a specific conditon to be satisfied. If it
     is not the loop is terminated.
  2.It can have more than one condition. However the loop will iterate until the last condition
     becomes false. Other conditions will be treated as statements.
  3.It is optional.
  4.Expression 2 can perform the task of expression 1 and expression 3. That is, we can
     we can initialize the variable as well as update the loop variable in expression 2 itself.
  5.We can pass zero as non-zero value in expression 2. However, in C, any non-zero value is
     true, and zero is false by default.
Properties of expression 3:
  1.Expression 3 is used to update the loop variable.
  2.We can update more than one variable at the same time.
  3.Expression 3 is optional.
*/
#include <stdio.h>
int main()
{
    int i;
    for(i=0;i<5;i++){
        printf("%d",i);
    }
    return 0;
}
