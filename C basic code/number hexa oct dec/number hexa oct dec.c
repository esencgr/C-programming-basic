#include<stdio.h>
#include<conio.h>
int main ()
{
	int sayi=0;
	while  (sayi<=15)	
	{
		printf ("onluk tabandaki gosterim :%d\n ",sayi);
		printf ("sekizlik tabandaki gosterim: %o\n",sayi);	
		printf ("onaltilik tabandaki gosterim: %x\n",sayi);
        printf ("\n");
        
		sayi++;
	
	}
	getch();
	return 0 ;
	
}

