#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main()
{
      char metin[250];
      int n = 0;
 
      clrscr();
 
      printf("\n Bir metin giriniz (Max 250 karakter) :\n");
      gets(metin);
      fflush(stdin);
      printf ("\n Kucuk : %s",metin);
      while( metin[n] != '\0' )
      {
        if( metin[n] >= 'a' && metin[n] <= 'z' && metin[n] != 'i')
            metin[n] = metin[n] - 32;
        else if ( metin[n] == '�' )
            metin[n] = '�';
        else if ( metin[n] == '�' )
            metin[n] = '�';
        else if ( metin[n] == 'i' )
            metin[n] = '�';
        else if ( metin[n] == '�' )
            metin[n] = 'I';
        else if ( metin[n] == '�' )
            metin[n] = '�';
        else if ( metin[n] == '�' )
            metin[n] = '�';
        else if ( metin[n] == '�' )
            metin[n] = '�';
        n++;
      }
 
      printf("\n Buyuk : %s",metin);
      getch();
}
