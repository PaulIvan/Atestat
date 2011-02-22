#include<iostream.h>
int n,i,j,a[10][10];
void main()
{ cin>>n;
 for(i=1;i<=n;i++)
  a[1][i]=i;
  for(i=2;i<=n;i++)
  {
   for(j=1;j<n;j++)
    a[i][j]=a[i-1][j+1];
    a[i][n]=a[i-1][1];
  }

  for(i=1;i<=n;i++)
  { cout<<endl;
  for(j=1;j<=n;j++)
      cout<<a[i][j];

  }

 }