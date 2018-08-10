#include<stdio.h>
#include<conio.h>
int main ()
{
	int sayi,sayac;
	printf ("bir sayi giriniz:");
	scanf ("%d",&sayi);
	for (sayac=(sayi-1);sayac>1;sayac--)
	{
		if (sayi%sayac==0)
		{
			printf ("girdiginiz sayi asal degildir");
		break;	
		}
		 if (sayac==2)
		{
		printf ("girdiginiz sayi asaldir ")	;
		}
	}
	getch();
	return 0 ;
}
