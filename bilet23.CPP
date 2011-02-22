   #include<iostream.h>
   #include<fstream.h>
   #include<conio.h>
    int k=0,i,x,j=0,a=0;
   unsigned int n;
     ofstream f("pag.txt");
 void main()
 { clrscr();
  cin>>n;
  for(i=1;i<=300;i++)
  if(i<10)k++;
  else
      if((i>=10)&&(i<100)) k=k+2;
       else k=k+3;
   x=n;
   while(x>k)
   {x=x-k;
    j++;}
    if(x!=0) j++;
  if(x==0) f<<j;
    else if(x<=9) f<<j<<endl<<x;
	  else { a=a+9;
		 x=x-9;
		 if(x<=1) f<<"imposibil";
		   else if(x<=180){ while(x>0) {a++; x=x-2;}
				    if(x<0)f<<"imposibil";
				      else f<<j<<endl<<a;
				    }
			    else
				 {a=a+90;
				 x=x-180;
				 if(x<=2)f<<"imposibil";
				     else {while(x>0){a++;x=x-3;}
					   if(x<0)f<<"imposibil";
					     else f<<j<<endl<<a;
                                           }
                                  }

		 }
}

