#include<stdio.h>
in main()
{
  
  int a=-1;
  a= -1<<4;
  printf("%x",a);
  return 0;
}
/*
o/p=f f f0


1> 1
  0000 0000 0000 0001
  2> 2's complement 
  1111 1111 1111 1111
   3> left shift by 4
    1111 1111 1111 0000
     4> hexadecimal value
        1111 1111 1111 0000
        
        15    15    15   0
         f    f     f    0
         */
