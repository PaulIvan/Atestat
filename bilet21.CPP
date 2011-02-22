#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<ctype.h>
#include<io.h>
#include<string.h>
ifstream f("doc.txt");
ofstream g("cnp.out");
void main()
{ char s[255],c,cuv[100],sep[]=" .,;:-!?",*p;
 int i,k,n,ok=0;
  while(!f.eof())
  {f.get(s,255);f.get();
	p= strtok(s,sep);
	while(p)
	{n=0;
	strcpy(cuv,p);
	 for(i=0;i<strlen(cuv);i++)
	   if((cuv[i]>='0')&&(cuv[i]<='9')) n++;
           if((n==strlen(cuv))&&(n==13)) {ok=1;g<<cuv<<endl;}
	 p=strtok(NULL,sep);
	 }
	}
     if(ok==0)g<<0;
 }



