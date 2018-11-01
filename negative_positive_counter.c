
#include <stdio.h>
#include <conio.h>

int main()
{
int pos=0,neg=0, sifir=0,adet,sayi,i ;
printf("kac adet sayi gireceksiniz: ");
scanf("%d",&adet);

for(i=1; i<=adet ;i++)
{
printf("%d.sayi:",i);
scanf("%d",&sayi);
if(sayi>0)
pos++;
else if (sayi<0)
neg++;
else
sifir++;
    	
}
    printf("pozitif sayilarin sayisi=%d\n",pos);
    printf("negatif olanlarin sayisi=%d\n",neg);
    printf("sifir olanlarin sayisi=%d\n",sifir);
getch ();
return 0;
}

