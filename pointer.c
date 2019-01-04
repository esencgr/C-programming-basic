#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int sayi=15;
	 int *p;
	 p=&sayi;
	 int sayi3=*p;
	 *p=150;
	 /*int sayi2=*p*/
	 
	
	printf ("%d \n",sayi3);
	printf ("%d",sayi);
	
	
	return 0;
}
