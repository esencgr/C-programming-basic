#include<stdio.h>
#include<stdlib.h>
int elemanToplami(int[],int);
int main ()
{
	int dizi[8]={1,2,3,4,5,15,43,47};
	int i;
    	printf ("girdigim dizi:");
    for (i=0;i<8;i++)
    {
    	
    	printf ("%d  ",dizi[i]);
    }
    printf ("\n");   
    printf("dizi elemanlarinin toplami=%d",elemanToplami(dizi,8));
	return 0;
} 
int elemanToplami(int dizi[],int elemanSayisi)
{

    int toplam=0;
    int i; 
	for (i=0;i<elemanSayisi;i++)
{
 toplam =toplam+dizi[i];
 }
 return toplam;
}
