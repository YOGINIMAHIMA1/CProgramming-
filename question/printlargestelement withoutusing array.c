#include <stdio.h>
int main()
{
  int n,ele,large=0;
  scanf("%d",&n);
  
  for(int i=1;i<=n;i++)
  { 
    
    scanf("%d",&ele);
    if(ele>large)
    {
      large=ele;
    }
  }
  printf("%d",large);
  return 0;
}
    
