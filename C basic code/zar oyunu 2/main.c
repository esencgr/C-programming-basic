#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
	int atis,gelen,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0;
	srand(time(NULL));
	
	
	    for (atis=0;atis<=600;atis++)
	    {
	    	gelen=1+rand()%6;
	    
			
	    
	
	        switch(gelen)
			{
				case 1:
				f1++;
				break;
				
				case 2:
				f2++;
				break;
				
				case 3:
				f3++;
		    	break;
				
				case 4:
				f4++;
				break;
				
				case 5:
				f5++;
				break;
				
				case 6:
				f6++;
				break;
	        }
	         
	    }
	    printf ("%s%15s\n","gelensayi","gelme sayisi");
	    printf ("1%15d\n",f1);
	    printf ("2%15d\n",f2);
		printf ("3%15d\n",f3);
	    printf ("4%15d\n",f4);   
	    printf ("5%15d\n",f5);
		printf ("6%15d\n",f6);
	 
	return 0;
}
