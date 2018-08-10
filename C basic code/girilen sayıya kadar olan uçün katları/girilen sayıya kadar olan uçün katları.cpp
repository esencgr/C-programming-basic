#include<stdio.h>
#include<conio.h>
int main ()
{
	int sayi,i=0;
	printf ("lutfen bir sayi giriniz:");
	scanf ("%d",&sayi);
	printf ("grdiginiz sayiya kadar olan ucun katlari:\n");
	
	for (i=0;i<=sayi;i+=3)
	
	{	   
	 printf ("%d\n",i);
	 

	}
	    getch();
	    return 0;
}
