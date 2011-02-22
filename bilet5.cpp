
#include<iostream.h>
#include<fstream.h>
ifstream f("date.in");
ofstream g("date.out");
int i,j;
void sub(int n,double a[20][20],int k,double&s)
{for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
 if(i+j==k)
	 s=s+a[i][j];
}

void main ()
{int n,k;
 double s=0, a[20][20];
   f>>n;
    for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	f>>a[i][j];
	
	for(k=2;k<=n;k++)
      sub(n,a,k,s);
	g<<s;
	
	
}
