 #include<iostream.h>
 #include<math.h>
 #include<conio.h>
 int a,b,n,i,k=0;
 double x[100];
 void main()
 { clrscr();
  cin>>n;
  for(i=0;i<n;i++)
  cin>>x[i];
  a=x[0];
  b=x[n-1];
  if(a>b) {int aux=a;
	    a=b;
	    b=aux;
	   }
  for(i=1;i<n-1;i++)
     if((x[i]<=a)||(x[i]>=b)) k++;
    cout<<k;
  }
