#include <iostream>
using namespace std;

unsigned long int fibo[48];

void genfibo()
{
	fibo[0]=0;
	fibo[1]=1;
	int i=2;
	while(i<(sizeof(fibo)/sizeof(int)))
	{
		fibo[i]=fibo[i-1]+fibo[i-2];
		i++;
	}
}

unsigned binarysearch(unsigned long int n, unsigned i=0, unsigned j=47)
{
	unsigned k=(i+j)/2;
	
	if(i==j-1)return k;
	
	if(fibo[k]>n)
		return binarysearch(n,i,k);
	
	if(fibo[k]<n)
		return binarysearch(n,k,j);
	
	return k;
}

int main()
{
	genfibo();
	
	int n=1,i,first,done=0;
	
	while(!done)
	{
		cin >> n;
		if(n==0)done=1;
		first=1;
		
		while(n>0)
		{
			if(!first)cout<<"+";first=0;
			
			i=binarysearch(n);
			cout<<fibo[i];
			n-=fibo[i];
		}
		cout<<"\n\n";
	}
	return 0;
	
}


