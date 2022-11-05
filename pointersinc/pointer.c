#include <stdio.h> // preprocessordirective   header file
void main() //  main method
{
  
  int i=100; // datatype identifier   value
  int* ptr; //pointer declaration- it work is to store information from memory location
  ptr= &i;  // address operator - it stores the memory address of ptr variable
  printf("%d",i);// variable i value print at console
    printf("%d",&i);//print memory address of i
  printf("%d",&ptr);// print memory address of ptr
  printf("%d", *ptr); // print value at memory address of variable ptr
  printf("%d", *(&i)); // it print the value at memory address at i
  return 0;
}
  
  
  
