#include<iostream.h>
#include<fstream.h>
#include<conio.h>
int x,max=0,k=0,i,a[100]={0};
ifstream f("numere.in");
void main()
{clrscr();
 while(f>>x)
 a[x]++;

 for(i=0;i<100;i++)
 if(max<a[i]){max=a[i];
	      k=i;
	      }


  cout<<k;
 }