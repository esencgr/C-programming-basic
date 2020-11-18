#include<stdio.h>
#include<math.h>

int mutlak(int);

int main (){
	int sayi;

	printf ("sayi giriniz:");
	scanf ("%d",&sayi);

	printf ("mutlak sayi :%d dir\n ",sayi);

	double x = sayi * 2;
	printf ("%d sayisinin karesi :%2f\n", sayi, x );

	return 0;
}

int mutlak (int y){
	
	if (y<(-1))
	   y=y*(-1);
	else
	   y=y;
	return y;

}
