#include<iostream.h>
#include<string.h>
void apcar(char s[256],char c,int &p)
{ int i;
 for(i=0;i<strlen(s);i++)
   if(s[i]==c) p=p+1;
}
void main()
 {  char s[256],voc[5]="AEIOU";
  int i,p=0;
  cin.get(s,256);
  cin.get();
    for(i=0;i<5;i++)
     apcar(s,voc[i],p);
     cout<<p;
  }
