#include <stdio.h>
int main()
{
  int n,lno,sum=0;
  cin>>n;
  t=n;
  for(int i=1;i<=n;i++)
  {
    lno=n%10;
    sum=sum*10+lno ;
    n=n/10;
  }
  n=t;
  if(n==sum)
  {
    printf("palindrome number :");
  }
  else
  {
    printf("Not palindrome number :");
  }
  return 0;
}
