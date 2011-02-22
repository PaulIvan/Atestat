#include <iostream.h>
#include<fstream.h>
#include<math.h>
ifstream f("numere.in");
ofstream g("numere.out");
int x,b1,b2,b3,n,nr1,nr2,b,x1;

void conversie (int x, int b)
{
   if (x)
   {
      conversie(x/b,b);
      g<<x%b;
   }
}

int conv(unsigned int x,int b)
{ int p=10,y=0,v=0;
	while(x)
    {y=y+((x%p)*pow(b,v));
     x=x/p;
     v++;
	}
    return y;

}

void main()
{ f>>b1>>b2>>b3>>nr1>>nr2;
 x=conv(nr1,b1);
 x1=conv(nr2,b2);
 n=x1+x;
 conversie(n,b3);

}