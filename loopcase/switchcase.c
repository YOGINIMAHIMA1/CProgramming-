#include <stdio.h>
int main()
{
  int i=5;
  switch(i)
    default:
  printf("python\n");
  case 1:
  printf("c\n");
  case 2:
  printf("c++\n");
  case 3:
  printf("devc\n");
  case 4:
  printf("flutter\n");
  return 0;
}
  
/* o/p-
python
c
expalination- as there is no case value 5 that's why it will execute default value and there is no break in default value that why it execute case 1 value after  that there
is break so it stop executing. */
