#include <stdio.h>
#include <conio.h>
 
#define MAX 100
 
int main(void)
{
      int max;
      clrscr();
 
      printf("\n PASCAL UCGENINI YAZDIRAN PROGRAM ");
      printf("\n ================================ ");
      printf("\n\nListelenecek basamak sayisi? (MAX=100) :");
      scanf("%d",&max);
 
      clrscr();
 
      unsigned long dizi1[MAX], dizi2[MAX];
      int kat,i=1;
 
      int sutun = 40, satir = 1;
 
      gotoxy(sutun,satir);
      printf("%4.d",i);
      sutun -= 2;
      satir++;
      for (kat = 1; kat < max+1 ; kat++)
      {
            dizi1[0] = 1;
            dizi1[kat-1]=1;
            dizi2[0] = 1;
            gotoxy(sutun, satir++);
            printf("%4.d ",dizi2[0]);
            for (i = 1 ; i < kat  ; i++)
            {
                  dizi2[i] = dizi1[i-1] + dizi1[i];
                  printf("%4.d ",dizi2[i]);
            }
            dizi2[kat]=1;
            printf("%4.d ",dizi2[kat]);
 
            for (int i = 0; i < kat ; i++)
            {
                  dizi1[i] = dizi2[i];
                  dizi2[i] = 0;
            }
 
            satir++;
            sutun -= 3;
      }
      getch();
}
