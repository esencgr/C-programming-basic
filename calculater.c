#include<stdio.h>
#include<conio.h>
int main ()
{
	int x,y,sonuc;
	char islem;
	
	printf("iki sayi giriniz :");
	scanf ("%d %d",&x,&y);
	printf ("yapilacak islem giriniz (+,-,/,*,%%):");
	fflush(stdin);
	scanf ("%c",&islem );
	if (islem=='+')
	  
	  	sonuc=x+y;
	  
    else if(islem=='-')
	    
		sonuc=x-y;
		    
	else if(islem=='/')
	    
		sonuc=x/y;
	
	else if(islem=='*')
	    
		sonuc=x*y;

	else if(islem=='%')
	    
		sonuc=x%y;
    else 
    printf ("gecersiz bir sonuc girdiniz");
    
    
    printf ("islem sonucu:");
    printf ("%d %c %d = %d",x,islem,y,sonuc);
    ;
    
	getch ();
	return 0;
}
