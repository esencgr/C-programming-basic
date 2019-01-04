#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    int carpim=1;
    printf("bir sayi girin:");
    scanf("%d",&i);
    for(j=i;j>0;j--){
        carpim=carpim*j;
    }
    printf("%d",carpim);
    getch () ;
    
}
