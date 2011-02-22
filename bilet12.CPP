#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<math.h>
ifstream f("date.in");
ofstream g("date.out");
 int prim(int x)
 { int d=2,ok=1;
   while((d<=sqrt(x))&&(ok))
    {if(x%d==0) ok=0;
     d++;}
     return ok;
 }

 void main()
 { int n,x[100],i,k;
  f>>n;
    while(f>>k)
     if(prim(k)) g<<k<<" ";

  }