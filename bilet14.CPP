#include<iostream.h>
#include<fstream.h>
ifstream f("date.in");
ofstream g("date.out");
int n,i,j,a[100],ok;
 void creare()
 {a[0]=1;
  a[1]=1;
   for(i=2;i<100;i++)
   a[i]=a[i-1]+a[i-2];
 }

int test_fibo( int x)
 {  ok=0;
   for(i=0;i<100;i++)
   if(a[i]==x) ok=1;

   return ok;
 }


void main()
{  int x;
 f>>n;
 creare();
 while(f>>x)
  if(test_fibo(x)) g<<x<<" ";
}

