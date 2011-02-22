#include<iostream.h>
#include<fstream.h>
#include<conio.h>
ifstream f("date.txt");
int i,j,n,m,a[100],b[100],ok,x,bun=0;
void main()
{clrscr();
 f>>n>>m;
 for(i=0;i<n;i++)
  f>>a[i];

   while(f>>x)
   { ok=1;
    for(i=0;i<n&&ok;i++)
    if(a[i]==x) ok=0;
     if(ok==0) bun=1;
   }

  if(bun)cout<<"b se poate obtine din a" ;
    else cout<< "b nu se poate obtine din a" ;
 }