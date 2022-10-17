#include <stdio.h>
int main()
{
  int a=3, b=8;// a,b=lvalues,3,8=r-values
  printf("%d",++(a+b*3)); //for increment operator we can only use variable that have some emmory location.we can 't use expression or constant as operand it will show compile time error.
  return 0;
}
/*
// o/p- compile time error it means L-value required
l-value (locator value) the value which is at left hand side is called l value .
  variable are use as lvalue they should have have their iwn memory location.
  it can't be 4,5,(a+b) etc
  l-value can be modified except array and const e.g int arr[4]; , const int a=8;//can't be modofied.
  l-value means -i,j,arr[],*p,struct, union type variable.
  */
