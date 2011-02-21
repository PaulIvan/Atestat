#include <fstream>
#include <iostream>

using namespace std;
ifstream f("numere.in");

int n,i=0,j=1,x=1,y=1,c,v[100];
   

void fibon()
{i=2;
v[0]=1;
v[1]=1;
while(j<n)
	{ x=j;
	 j=x+y;v[i]=j;i++;
	 y=x;
	}
c=i;	
}

int main()
{ f>>n;
fibon();
for(i=0;i<c-1;i++)
	for(j=i+1;j<c;j++)
		if(v[i]+v[j]==n) 
			{
				cout<<v[i]<<"+"<<v[j];
				i=n-1;
				j=n;
			}
		
return 0;
}
