#include<iostream.h>
#include<fstream.h>
#include<math.h>
#include<conio.h>
#include<string.h>
ifstream f("date.in");
ofstream g("date.out");
 int n,x,y;
 char s[256],c;
 void main()
 { clrscr();
  cin>>n;
  for(x=(n+1)/2;x>=1;x--)
  for(y=(n+1)/2;y>=1;y--)
   if(n==y*y-x*x){ cout<<y<<" "<<x<<endl;
		  cout<<y<<" "<<-x<<endl;
		  cout<<-y<<" "<<x<<endl;
		  cout<<-y<<" "<<-x<<endl;}

}
