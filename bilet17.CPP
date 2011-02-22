#include<iostream.h>
#include<fstream.h>
#include<math.h>
ifstream f("date.in");
ofstream g("date.out");
int suma_cifre(int x)
{ int x1=x,s=0;
 while(x1!=0)
  { s=s+x1%10;
    x1=x1/10;
    }
   return s;
   }
void main()
{  int x;
 while(f>>x)
 if(suma_cifre(x)%3==0) g<<x<<" ";
}