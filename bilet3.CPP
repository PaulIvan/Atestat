#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<math.h>
ifstream f("numere.in");
int n,i,s,x=0,p,nr,k=1;
void main()
{ clrscr();
  f>>n;
  for(i=0;i<n;i++)
     {f>>x;
     nr=nr*10+x;
     }

   p=(int)pow(10,n-1);
   while(k<=n)
   {
   s+=nr=nr/10+(nr%10)*p;
    k++;
    }
  cout<<s;

}




