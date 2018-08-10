#include<stdio.h>
#include<conio.h>
int main()
{
	int x=2575, i; 
	i=x/1000;
	x=x-i*1000;
	
	printf ("%d\n",i);
    
    i=x/100; 
    x=x-i*100;
    
    printf("%d\n",i );
    
    i=x/10;
    x=x-i*10;
    printf ("%d\n",i);
    printf("%d\n" ,x);
   
   
    return 0;
    
    getch ();
    
    
	
}
