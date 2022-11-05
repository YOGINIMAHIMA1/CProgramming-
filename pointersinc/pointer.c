#include <stdio.h> // preprocessordirective   header file
void main() //  main method
{
  
  int i=100; // datatype identifier   value
  int* ptr; //pointer declaration- it work is to store information from memory location
  ptr= &i;  // address operator - it stores the memory address of ptr variable
  printf("%d",i);
    printf("%d",&i);
  printf("%d",&ptr);
  printf("%d", *ptr);
  printf("%d", *(&i));
  return 0;
}
  
  
  
