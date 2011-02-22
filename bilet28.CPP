#include<iostream.h>
#include<fstream.h>
#include<math.h>
ifstream f("numere.in");
ofstream g("numere.out");
 int n,m,a[5][5],i,j,k,ok=0,r=0;
 void main()
 {f>>n;
 int x[16];
 for(i=0;i<n;i++)
 f>>x[i];
  m=sqrt(n);
 for(k=1;k<=(m+1)/2;k++)
       {
       for(j=k;j<=m-k+1;j++)
	  {a[j][k]=x[r];
	   r++;
	   }
       for(i=k+1;i<=m-k+1;i++)
	  {a[m-k+1][i]=x[r];
	   r++;}
       for(i=m-k;i>=k;i--)
	  {a[i][m-k+1]=x[r];
	  r++;}
       for(i=m-k; i>k;i--)
	  {a[k][i]=x[r];
	   r++;}
       }

for(i=0;i<m;i++){
for(j=0;j<m;j++)
g<<a[i][j];
g<<endl;
}
}