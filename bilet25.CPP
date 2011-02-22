#include<math.h>
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
ifstream f("numere.in");
ofstream g("numere.out");
void main()
{ int a[9999]={0},i,x;
  while(f>>x)
    a[x]=1;
   for(i=9999;i>0;i--)
    if(a[i]==0)g<<i<<" ";

}