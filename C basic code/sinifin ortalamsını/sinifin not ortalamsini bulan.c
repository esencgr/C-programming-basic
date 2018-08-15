#include<stdio.h>
#include<conio.h>
int main ()
{
	int sayici=1,alinannot=1,toplam=0,ortalama ;
	while (alinannot != 0)
	{
	
		printf("notu giriniz:");
		scanf("%d",&alinannot);
		toplam =toplam+alinannot ;
		sayici++;
	}
	ortalama =toplam/sayici ;
	printf ("sinifin not ortalamasi:%d",ortalama);
	
	getch ();
	return 0;
	
}
