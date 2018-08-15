#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int sayilar [10], i;
	 for (i=0;i<10;i++)
	  sayilar [i]=0;
       
       printf ("%s%13s\n","eleman","deger");
       
       
     for (i=0;i<10;i++) 
	   printf ("%d%13d\n",i,sayilar[i]);
	 
	 
	 return 0;
	 
}
