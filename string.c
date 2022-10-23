#include <stdio.h>
int main()
{
  char str[]="Cricket";
  int x=2,y;
  y=++x * x++;
  printf("%d\n", str[++y]);
  printf(sizeof(str));
  return 0;
}
