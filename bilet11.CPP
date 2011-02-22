#include<iostream.h>
#include<fstream.h>
#include<conio.h>
ifstream f("matrice.in");
ofstream g("matrice.out");
int i,j;
 int suma(int x[10][10],int n,int p)
 { int s=0;
  for(i=1;i<=n;i++)
   s=s+x[p][i];
   return s;
  }

 void main()
 {clrscr();
  int n,x[10][10];
  f>>n;
   for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
    f>>x[i][j];
  for(j=1;j<=n;j++)
  if(suma(x,n,j)%2==0) g<<j<<" ";



 }