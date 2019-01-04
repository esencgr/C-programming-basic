#include<stdio.h>
#include<conio.h>
int main ()
{
	int i=0,j=0,kenar;
	printf ("karenin bir kenarini giriniz:");
	scanf ("%d",&kenar);
	 while (i<kenar)
	 {
	        i++;
        
	 	while (j<kenar)
	    {
	 	j++;
		  
            if (i>0 && i<kenar && j>0 && j<kenar )
            printf (" ");
            else 
            printf ("*");
	    }
	    
	 	
	     j=0;
     printf ("\n");

	 }
	 
getch ();
return 0;
	
}

