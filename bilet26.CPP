#include<iostream.h>
#include<conio.h>
#include<fstream.h>
ofstream f("munte.txt");
void main ()
{clrscr();
 int i,j,k,l,m,nr=0;
  for(i=1;i<=5;i++)
  for(j=i+1;j<=9;j++)
  for(k=j+1;k<=9;k++)
  for(l=k+1;l<=9;l++)
  for(m=l+1;m<=9;m++)
  {f<<i<<j<<k<<l<<m<<l<<k<<j<<i;
	nr++;
	f<<endl;
  }
   f<<nr;
}

