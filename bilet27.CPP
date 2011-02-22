#include<iostream.h>
#include<fstream.h>
#include<math.h>
ifstream f("mat.in");
ofstream g("mat.out");
 int n,m,a[3][4],i,j,max=0,min=9999,k,ok=0,r=0;
 void main()
 {f>>n>>m;
  for(i=0;i<n;i++)
  for(j=0;j<m;j++)
  {f>>a[i][j];
   if(a[i][j]>max) max=a[i][j];
   }


  for(j=0;j<m;j++)
  {min=9999;
  for(i=0;i<n;i++)
  if(a[i][j]==max){for(k=0;k<n;k++)
		   if(a[k][j]<min) min=a[k][j];
		   a[i][j]=min;
		   ok=1;r++;
		   }

  }
  if(ok){
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	g<<a[i][j]<<" ";
	g<<endl;
	 }
	 g<<r;}
 }