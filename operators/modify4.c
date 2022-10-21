#include <stdio.h>
int main()
{
  int a=7;
  a= a+++a;
  printf("%d/n",a);
  return 0;
}
/* modify operator has higher priority than arthmetic operator so first modify operator execute. than arthmetic operator.
a= a++ +a;
a=7+7=14;//postfix increment happen
a=15;   

*/
