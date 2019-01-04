#include<stdio.h>
#include<conio.h>
int main ()
{
	int sayi ;
	
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if ( sayi%2==0)
	printf (" %d sayisi cifttir\n",sayi);
	else 
	printf (" %d sayisi tektir\n ",sayi);
	
	
	
	
	getch();
	return 0;
}

