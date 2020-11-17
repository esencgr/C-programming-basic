#include<stdio.h>
#include<math.h>

int mutlak(int);

int main (){
	int sayi;
	double x;
	printf ("sayi giriniz:");
	scanf ("%d",&sayi);

	printf ("mutlak sayi :%d dir\n ",mutlak(sayi));
	x=sqrt(mutlak (sayi));
	printf ("%d sayisinin karekoku :%2f",mutlak(sayi),x);

	return 0;
}

int mutlak (int y){

	if (y<(-1))
	y=y*(-1);
	else
	y=y;
	return y;

}
