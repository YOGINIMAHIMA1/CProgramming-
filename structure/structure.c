struct Emp
{
  int eno; //struct members
  char ename[20];
  float esal;
};
void main()
{
  char* cp;
  int* ip;
  struct Emp* sep;
  printf("%d\n",sizeof(cp));
  printf("%d\n",sizeof(ip));
  printf("%d\n",sizeof(sep));
  return 0;
}
  
