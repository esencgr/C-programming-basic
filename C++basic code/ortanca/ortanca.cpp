#include<stdio.h>
#include<conio.h>
int main ()

{
	int a,b,c ;
	printf ("a sayisi:");  scanf ("%d",&a);
	printf ("b.sayisi:");  scanf ("%d",&b);
	printf ("c.sayisi:");  scanf ("%d",&c);
	
	if ((b>c && b>a && a>c) || ( c>b && a>b && c>b))
	printf ("a ortanca sayidir ");

	else if ((c>a && b>a && c>b) || (a>c && b>c && a>c))
	printf ("b ortanca sayidir");

	else ("c ortanca sayidir");
   
    getch ();
    return 0;
}
