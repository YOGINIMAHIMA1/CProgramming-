/*  Derived data type in c
-array
-function
-pointer
-refrence
*/

#include<stdio.h>
int main() // main function declaration
{
  int A[]={1,2,3};  //array declaration
  int _a=22;
  int *p;   // pointer declaration  
  *p=&_a;      //refrence
  for(int i=0;i<*p;i++)
  {
      int sum=0;
      sum=sum+A[i];
      }
      cout<<A[i]<<endl;
      
      return 0;
      }
      
