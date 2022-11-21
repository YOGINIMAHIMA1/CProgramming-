#include <stdio.h>
int main()
{
  
  int m,n,i,j;
  cin>>m>>n;
  int a[m][n];
  for( i=0;i<m;i++)
  {
    for( j=0;j<n;j++)
    {
    cin>>a[i][j];
      }
  }
  for( i=0;i<m;i++)
  {
    for( j=0;j<n;j++)
    {
    cout<<a[i][j]<<" ";
      }
    cout<<endl;
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
     cout<<a[i][j]<<" ";
   }
   cout<<endl;
 }
  
  return 0;
}
/* time complexity=O(m*n)
  space complexity-O(m*n)
  */
