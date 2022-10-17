#include <stdio.h>
int main()
{
  
  int a,b,c;
  a=b=4;
  c=a==b;
  cout<<a<<endl;
  cout<<b<<enndl;
  cout<<c<<endl;
  return 0;
}
/*o/p---   4
           4
           1
           
           a=b=4           // b=4,a=b,  a=4
           a==b,     4==4  ----condition true  ,so 1 is assign to c. c=a==b  , c=4==4
           */
              |
                               
