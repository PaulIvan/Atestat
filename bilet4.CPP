#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
ifstream f("cuvinte.in");
ofstream g("cuvinte.out");
struct cuvinte{ char cuv[100];}a[100],aux;
void main()
{ int n=0,ok=1,i;
 char s[256];
 while(!f.eof())
 {f.get(s,256);
  f.get();
  strcpy(a[n].cuv,s);
  n++;
 }
 while(ok)
 {ok=0;
  for(i=0;i<n-1;i++)
   if(strcmp(a[i].cuv,a[i+1].cuv)>0){ aux=a[i];
				    a[i]=a[i+1];
				     a[i+1]=aux;
				     ok=1;
				     }
 }
 for(i=0;i<n;i++)
 g<<a[i].cuv<<endl;
 }

