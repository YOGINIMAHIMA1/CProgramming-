#include <stdio.h>
int main()
{
  void fun(void);
  void main()
  {
    fun();
    fun();
    fun();
  }
  void fun()
  {
    static int a=5;
    printf("%d",a+=2;
           }
           
