   #include<iostream.h>
   #include<fstream.h>
   #include<conio.h>
    int n=0,i,x[18];
   unsigned int a,b;
     ifstream f("numere.in");
     ofstream g("numere.out");
     void main()
     { clrscr();
       f>>a>>b;
       while(a!=0)
       {
	x[n]=a%10;
	n++;
	a=a/10;
	}
	while(b!=0)
	{

	x[n]=b%10;
	n++;
	b=b/10;
	}

	int ok=1,aux;
	while(ok)
	{ ok=0;
	  for(i=0;i<n;i++)
	   if(x[i]<x[i+1]){ aux=x[i];
			    x[i]=x[i+1];
			    x[i+1]=aux;
			    ok=1;
			   }
	}
     unsigned long y=0,p=1;
	for(i=0;i<n;i++)
	{ y=y*10+x[i];

	}
	cout<<y;
   }