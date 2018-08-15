#include<stdio.h>
#include<conio.h>
int main ()
{
	int cifts;
	printf("1 den 20 ye kadar cift sayilar:\n");
	for (cifts=1;cifts<=20;cifts++)
	{
		if ((cifts%2)==0)
		{
		 printf ("%d\n",cifts);
		}
	}
	getch ();
	return 0;
	
}
