#include<iostream.h>
#include<conio.h>
#include <fstream.h>
#include<string.h>
#include<math.h>

ifstream f("numere.in");
ofstream g("numere.out");
long int n,x,i,j,v;

int cifre(long int x)
{long int k=0,x1=x;
	while(x1)
	{ k++;
	x1/=10;
	}
 return k;
}

int rotund(long int x)
{long int x2=x,c=0,nr=0;
  j=cifre(x);
 while(c!=x)
	 {c=(x2%(long int)pow(10,j-1))*10 + x2/((long int)pow(10,j-1));
	  nr++;
	  x2=c;

	 }
 if(nr<j) return 1;
				else return 0;
}
void main()
{clrscr();
 f>>n;
 v=1;
 for(i=0;i<n;i++)
	 {f>>x;
	 if(rotund(x)) if(v%2==0){ g<<x<<" "<<endl; v++;}
						 else {g<<x<<" ";v++;}
	 }


}
