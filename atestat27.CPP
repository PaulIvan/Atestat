#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <fstream.h>
ifstream f("MAT.in");
ofstream g("mat.out");
int n,m,a[100][100],v[10],maxm=0,minc,i,j,c=0;

void citire()
{f>>n;f>>m;
 for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	 f>>a[i][j];
}

void max()
 {
 for(j=0;j<m;j++)
  {
	minc=a[0][j];
	 for(i=0;i<n;i++)
	{
		if(a[i][j]>maxm) maxm=a[i][j];
		if(a[i][j]<minc) minc=a[i][j];

	 }
	 v[j]=minc;
  }
}


void modif()
{ for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	if(a[j][i]==maxm)
	   {a[j][i]=v[i];
	    c++;
	   }



}

void afis()
{
  for(i=0;i<n;i++)
  {
    if(i) g<<endl;
      for(j=0;j<m;j++)
	 g<<a[i][j]<<" ";
  }
g<<endl;
g<<c;
}

void main()
{clrscr();
citire();
max();
modif();
afis();
}



