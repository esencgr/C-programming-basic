#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	     for (i=1;i<=1000;i++)
	         {
	         	printf("%5d",1+(rand()%1000));
	         	
	         	if (i%5==0)
	         	{
	         		printf ("\n");
	         		
	         	}
	     
	         }  
	
	
	
	return 0;
}
