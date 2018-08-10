#include <stdio.h>
#include <conio.h>
 
int main( )
{
 int sayi = 0;
 
 clrscr();
 
 printf("\n Bir sayi giriniz: ");
 scanf("%i",&sayi);
 fflush(stdin);
 
 printf("\n Girdiginiz sayi %i'dir",sayi);
 
 getch();
}
