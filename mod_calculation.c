#include<stdio.h>
#include<conio.h>
int main ()
{
	int x, y ,mod ;
	printf("lutfen iki sayi giriniz:");
	scanf ("%d %d",&x,&y);
	
	printf (" girdiginiz \"birinci\" sayi=%d\n",x);
	printf (" girdiginiz \"ikinci\" sayi=%d\n",y);
	
	mod=x % y ;
	
	printf("%d %% %d=%d",x,y,mod);
	
	getch ();
	return 0;
	
}
