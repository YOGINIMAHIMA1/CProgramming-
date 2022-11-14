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
                      *a  alias(new name created given to another variable---- it stores value of variable which has given this new name) *//* Pointers- It is a special variable which stores the starting address of another variable.
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
  int a=11, *pa;
 double b= 12.0,*pb;
   pa= &a;
  pb=&b;
  
 printf("%d\n",*pa);
 printf("%lf\n",*pb);
 printf("%x\n",&a);
 printf("%x\n",&b);
 printf("%d\n",a);
 printf("%lf\n",b);
 printf("%x\n",*&pa);
 printf("%x\n",&*pb);
 printf("%d\n",*&*pa);
 
 return 0;
}
