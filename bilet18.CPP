#include<iostream.h>
#include<fstream.h>
#include<math.h>
ifstream f("multimi.in");
ofstream g("multimi.out");
int n,m,a[100],b[100],c[200],i,j,k;
void main()
{f>>n>>m;
for(i=0;i<n;i++)
 f>>a[i];
for(j=0;j<m;j++)
f>>b[j];
i=0;j=0;k=0;
while((i<n)&&(j<m))
{ if(a[i]<b[j]){ c[k]=a[i];i++;}
  else {c[k]=b[j];j++;}
   k++;
}
if(i<n) for(j=i;j<n;j++)
	 { c[k]=a[j];
	  k++;
	  }
	  else for(i=j;i<m;i++)
	  {
	   c[k]=a[i];
	  k++;}


for(i=0;i<k;i++)
g<<c[i]<<" ";
}
