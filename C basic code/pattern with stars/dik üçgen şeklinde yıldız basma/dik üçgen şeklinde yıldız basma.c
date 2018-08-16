#include<stdio.h>
#include<conio.h>
int main ()
{
	int sayi;
	printf ("sayi belirleyiniz:");
	scanf ("%d",&sayi);
	
	int i,j ;
	
	for (i=sayi;i>0;i--)
	{
		for (j=0;j<i;j++)
		{	
			printf ("*");

		}
		printf("\n");
		
	}
	getch ();
	return 0;
	
}
