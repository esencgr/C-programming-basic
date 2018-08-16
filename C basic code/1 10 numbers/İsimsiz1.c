#include<stdio.h>
#include<conio.h>

int main ()
{ /*
int sayi;
for (sayi=0;sayi<=10;sayi++)
{
	printf("sayi:%d\n",sayi);
}*/
int x=1,y,sayi;

	printf ("toplanacak sayilarin adeti giriniz:");
	scanf ("%d",&y);
	
    while (x<=y)
	{
	
	printf ("toplanacak sayilarin %d.cisi:",x);
	scanf ("%d",&sayi);
	x++;
    }
	printf ("fazla sayi girme amk !!!");

getch();

return 0;
}

