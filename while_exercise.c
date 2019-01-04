#include<stdio.h>
#include<conio.h>
 
 int main ()
 {
 	int aa=0,cc=0,k=0,g=0,i=1,n;
 	printf ("programi sonlandirmak icin 0 tusla\n");
	 while (1) 
	 {
	 	printf("%d.notu gir :",i);
	 	scanf ("%d",&n);
	 	
	 	if (n>=80 && n<=100)
	 	{
	 		printf ("aa ile gecti\n ");
	 		g++;
	 		aa++;
	 	}
	 	else if (n>=60 && n<80)
	 	{
	 		printf ("cc ile gecti\n");
	 		g++;
	 		cc++;
	 		
	 	}
	 	else if (n>0 && n<=60)
	 	{
	 		printf ("kaldiniz\n");
	 		k++;
	 	}
	     else if(n==0){
	     	break ;
	     }
	     i++;
	     
	}
	 printf ("gecenlerin sayisi=%d\n",g);
	 printf ("kalanlarin sayisi=%d\n aa alanlar=%d\n cc alanlar=%d\n  ",k,aa,cc);
	 
	   getch ();
	   return 0 ;
	 
	 }
