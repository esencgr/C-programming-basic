#include<stdio.h>
#include<conio.h>
int main ()
{
	
int x=1;
while (x<=20){

printf("%d",x);
if (x%5==0)
printf("\n");
else 
printf("\t");
x++;
}  
/*
int i,j,x,y ;

printf ("1 ve 20 arasi iki sayi gir x,y  :");
scanf("%d%d",&x,&y);

for (i=1; i<=y;i++)
{
	for (j=1;j<=x;j++)
	{
		printf ("*");
		
	}
	printf ("\n");
	
}*/

getch ();
return 0;

}
