#include<iostream.h>
#include<fstream.h>
#include<math.h>
ifstream f("date.in");
ofstream g("date.out");
int n,max=0,a[100][100],i,k,j,ok,min=999999;
void main()
{f>>n;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
f>>a[i][j];
if(a[i][j]<min)min=a[i][j];
if(a[i][j]>max) max=a[i][j];
}
for(i=0;i<n;i++)
{ ok=0;
for(j=0;j<n;j++)
 if(a[i][j]==max)ok=1;
 if(ok)for(k=0;k<n;k++)
       a[i][k]=a[i][k]+min;
}
for(i=0;i<n;i++)
{g<<endl;
for(j=0;j<n;j++)
g<<a[i][j]<<" ";
}
}
