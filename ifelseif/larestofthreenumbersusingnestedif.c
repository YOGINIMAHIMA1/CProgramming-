/* 
if(condition)
{
   if(condition)
   {
      statement;
      }
 }
 
 else
 {
     if(condition)
     {
       statement;
       }
  }
  */

#include <stdio.h>
int main()
{
  int a, b,c;
  cin>>a>>b>>c;
  if(a>b)
  {
    if(a>c)
    {
      printf("a is big");
    }
    else
    {
      ("c is big");
    }
  }
  
  
  else
  {
    if(b>c)
    {
      printf("b is big");
    }
    else
    {
      printf("c is big");
    }
  }
  return 0;
}
