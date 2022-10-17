#include <stdio.h>
int main()
{
  float a=22.2;
  a=a%2==0; //modulus operator-is used to obtain remainder after performing integer division
  printf("%f",a);
  return 0;
}
/* o/p-   compile-time error 
modulus operator does not perform operation on floating point operand.
  it only perform operation on integer both operand should be integer type
  for ex- 3%2=1 */
