#include<stdio.h>
#include<conio.h>
int main ()
{
	int no=0,ilk,harcama,kredi,limit,son ;
	do{
	        printf ("hesap nosu giriniz(cikis icin 0) :");
		scanf("%d",&no);
		   if (no==0)
			break ;

		printf ("ilk bakiyeyi giriniz :");
		scanf("%d",&ilk);
		

		printf ("top harcamalari giriniz :");
		scanf("%d",&harcama);
		

		printf("top kredileri giriniz :");
		scanf("%d",&kredi);
		

		printf ("kredi limitini  giriniz:");
		scanf("%d",&limit);
		
		
		son=ilk+harcama-kredi;
		

		printf ("son bakiye=%d\n",son);
		
	        if (son>limit)
		     printf ("%d hesap nolu kisi kredi limitini asti\n ",no);
		  
	        printf ("\n\n\n");
	}while(no!=0);
	
printf ("program sonlandi!!");
getch ();
return 0;
	
}
