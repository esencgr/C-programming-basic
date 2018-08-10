#include<stdio.h>
#include<conio.h>
int main (){
	
	int sayi=1;
	printf ("1 ve 20 arasindaki cift sayilar:\n ");
	while (sayi<=20)
	{
		
	if ((sayi%2)==0 )
	{
	printf ("%d\n",sayi );
	}
	
	sayi++;
		
	}
	getch ();
	
	return 0;
}

