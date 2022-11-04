#include <stdio.h>
int main()
{
  int a,b;
  cin>>a>>b;
  a= a+b;
  b=a-b;
  a=a-b;
  printf("%d %d",a,b);
  return 0;
}
