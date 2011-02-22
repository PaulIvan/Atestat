#include<iostream.h>
#include<fstream.h>
#include<math.h>
ifstream f("date.in");
ofstream g("date.out");
int a,b,i;
struct prim{ int y;
	      int s;
	    }v[100],aux;
int prim(int x)
{ int d=2,ok=1;
  while((d<=sqrt(x))&(ok))
	{if(x%d==0)ok=0;
	 d++;}

if(ok) return 1;
	else return 0;

}
void main ()
{
 int k=0,ok1=1;
 f>>a>>b;
 for(i=a;i<=b;i++)
  if(prim(i)){
	      v[k].y=i;
	      v[k].s=abs(b+a-2*i);
	      k++;
	     }
 while(ok1)
  {ok1=0;
   for(i=0;i<k-1;i++)
	   if(v[i].s>v[i+1].s){ aux=v[i];
				v[i]=v[i+1];

			       v[i+1]=aux;

			      ok1=1;
			  }
	}
  cout<<v[0].y;



}