#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<math.h>
 ifstream f("date.txt");
 int s[100],i,j,b,n=1,max=0;
 void main()
 {
 clrscr();
   while(f>>b)
  { s[n]=b;
   n++;
   }


  for(i=1;i<n;i++)
   for(j=i+1;j<=n;j++)
       if(s[i]==s[j]) if(max<abs(j-i)) max=abs(j-i);

   cout<<max;
   }