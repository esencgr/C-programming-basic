#include<stdio.h>
#include<math.h>

int mutlak(int);

int main (){
	int sayi;
	double x;

	printf ("sayi giriniz:");
	scanf ("%d",&sayi);
    sayi = mutlak( sayi );
	printf ("mutlak sayi :%d dir\n ",sayi);

	x = sqrt(sayi);
	printf ("%d sayisinin karekoku :%2f", sayi, x );

	return 0;
}

int mutlak (int y){
	
	if (y<(-1))
	y=y*(-1);
	else
	y=y;
	return y;

}
