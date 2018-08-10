#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,n,sayac=1,sonuc=1;

	printf("a sayisini giriniz:");
	scanf ("%d",&a);
	printf("n sayisini giriniz:");
	scanf ("%d",&n);

	while (sayac<=n)
	{
	sonuc=sonuc*a;
	sayac++;
		
    }
	printf ("a nin n. kuvveti:%d",sonuc);

    
	
	getch ();
	return 0;
	
}
