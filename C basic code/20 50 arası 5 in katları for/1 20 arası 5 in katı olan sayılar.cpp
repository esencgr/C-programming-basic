#include<stdio.h>
#include<conio.h>
int main ()
{
int sayilar;

printf ("20 ile 50 arasi sayilar 5erli yaz:\n");

for (sayilar=20;sayilar<=50;sayilar+=5)
{
	printf ("%d\n",sayilar);
}

getch ();
return 0;
}
