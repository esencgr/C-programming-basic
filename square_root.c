#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{  
int sayi=0 ;
  do
 {
   	printf ("karekokunu almak istediginiz sayiyi giriniz:\n");
   	printf ("(cikmak icin 0 degerini giriniz :) ");
    scanf ("%d",&sayi);
   	
      double kok=sqrt((double)sayi);
      printf ("-----------------------------\n");
      
      printf ("girilen deger:%d\n",sayi);
      printf ("karekok :%.2f\n",kok);  
	  
	  printf ("-----------------------------\n");

 }
  while (sayi!=0);
  printf ("programdan cikiliyor..");
  
getch ();
return 0;

}
