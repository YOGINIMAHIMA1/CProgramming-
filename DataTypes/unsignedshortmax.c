#include <stdio.h>
#include <limits.h>
int main()
{
  printf("%u",USHRT_MAX);
  printf("%d",SHRT_MAX);
  Print("%d",SHRT_MIN);
  return 0;
}
/*  limits.h- it is header file provides all constant variables.
          these variables are represented using capital letters.
          signed- +ve and -ve -  -32767 to +32768
          unsigned- +ve - 0 to 65535
          short= 2 bytes= 2^16=65535
          format specifier for signed =%d
          unsigned=%u  */
