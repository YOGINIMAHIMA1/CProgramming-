#include <stdio.h>
int main()
{
  int i=4,j=2;
  while(i+1?--i:--j)
  {
    printf("%d\n",i);
    }
  return 0;
}
/* i=2,j=2
while(i+1?--i:--j)
   while(2+1=3?--i=1(--2)) //i=1
   
   while( 1+1=2?--i=(--1) //i=0 while(0) false value generate loop terminate
   o/p-1 */
