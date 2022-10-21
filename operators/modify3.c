#include <stdio.h>
int main()
{
  int a=4, b=5;
  b= a++ + a--;
  a= ++b + b--;
  printf("%d/n",a);
  printf("%d/n",b);
  return 0;
}
/* b= a++ + a--     ;
  b= 4+4=8; ------b=8;    a++=a=5;  a--=4;
  a= ++b + b--; -----a=9+9=18; a=18,b=8
  o/p- a=18,b=8 */
