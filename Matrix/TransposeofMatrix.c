#include <stdio.h>
int main()
{
  
  int m,n,i,j,k;
  cin>>m>>n;
  int a[][];
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
    cin>>a[i][j]
      }
  }
 for( i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
   {
     if(i<j)
     {
       temp=a[i][j];
       a[i][j]=a[j][i];
       a[j][i]=temp;
     }
   }
 }
  cout<<a[i][j];
  return 0;
}
