#include <stdio.h>

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
           
/* o/p-
7
9
11
*/
