#include<stdio.h>
#include<conio.h>
int main ()
{
	int i=0,j=0,kenar;
	printf ("karenin bir kenarini giriniz:");
	scanf ("%d",&kenar);
	 while (i<kenar)
	 {
	   
	 	while (j<kenar)
	    {
	 	j++;
	 	printf ("*");
	 	
	 	}
	 	
	 j=0;
     i++;
     printf ("\n");

	 }
	 
getch ();
return 0;
	
}

