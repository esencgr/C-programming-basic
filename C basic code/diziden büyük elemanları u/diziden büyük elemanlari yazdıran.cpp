#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int sayilar [10]={23,45,54,65,75,23,12,23,45,98},i;
	printf("dizimiz:");
    for (i=0;i<=9;i++){
    	
    	printf ("%d  ",sayilar[i]);
    
    }	printf ("\n");
	int girilensayi;
	printf("bir sayi giriniz:");
	scanf ("%d",&girilensayi);
	   for (i=0;i<=9;i++)
	   {
	   	if (sayilar[i]>girilensayi)
	   	printf ("%d\n",sayilar[i]);
	   	
	   }
	



return 0;

}
