#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,c;
	printf ("a sayisi :"); scanf ("%d",&a);
	printf ("b sayisi :"); scanf ("%d",&b);
	printf ("c sayisi :"); scanf ("%d",&c);
	
	if (a>b && a>c)
	printf("a sayisi en buyuktur");
	else if (b>c)
	printf ("b sayisi en buyuktur");
	else 
	printf ("c sayisi en buyuktur");
	getch ();
	
}
