#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<ctype.h>
#include<io.h>
#include<string.h>
ifstream f("date.in");
ofstream g("date.out");
void main()
{ char s[255],c,cuv[100],sep[]=" .,;:-!?",*p;
 struct vector{ char v[100];}x[100];
 int i,k,n=0,ok;
  while(!f.eof())
  {f.get(s,255);f.get();

	p= strtok(s,sep);
	while(p)
	{strcpy(cuv,p);
              strlwr(cuv);
	 if(strstr(cuv,"ate")) { ok=1;
			for(i=0;i<n;i++) if(strcmp(cuv,x[i].v)==0) ok=0;
			if(ok){ strcpy(x[n].v,cuv);
			  n++;}
                         }
	 p=strtok(NULL,sep);
	 }
	}
	for(i=0;i<n;i++)
	g<<x[i].v<<endl;
 }



