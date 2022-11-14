/* Pointers- It is a special variable which stores the starting address of another variable.
Address- it is positive integer value.

syntax-
 datatype* identifier; or  datatype *identifier;
 int* a; or int  *a;
 
                  *a  ----------------- a= pointer ( a stores starting address of another variable)
                  \
                   \
                    \
                     \      
                      *a  alias(new name created given to another variable---- it stores value of variable which has given this new name) */

#include <stdio.h>
int main()
{
  int a, *pa;
  float b,*pb;
   pa= &a;
  pb=&b;
scanf("%d",&a);
 scanf("%f",&b);
 printf("%d",*pa);
 printf("%d",*pb);
 return 0;
}
