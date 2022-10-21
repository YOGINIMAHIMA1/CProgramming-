#include <stdio.h>
int main()
{
  int a=4, b=5;
  a= ++a + a++;
  b= b++ - b--;
  printf("%d\n",a);
  printf("%d\n",b);
  return 0;
}
/* 

1  prefix increment/decrement
2> substitution
3> evaluation(+,-,*,/)
4>assignment
5> postfix increment/decrement

a= ++a + a++; =  5+5=10  ---a=10--- a++---a=11;
b=b++ - b--; = 5-5=0 -- 6-6=0 ----5-5=0--b=0;
