#include<math.h>
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
ifstream f("eur.in");
ofstream g("eur.out");
void main()
{ int s,n,e,a,p=0,ok,k;
 clrscr();
 f>>s>>n>>e;
 while(s!=0)
  { ok=0;k=0;
    a=pow(e,n);
    if(s>a) ok=1;
    while(s>=a){ s=s-a;
		k++;}
     if(ok) g<<k<<"bacnote cu valoarea"<<a<<endl;
    p=p+k;
    n=n-1;
  }
  g<<p;
}
