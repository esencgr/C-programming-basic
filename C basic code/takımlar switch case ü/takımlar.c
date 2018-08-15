#include<stdio.h>
#include<conio.h>
int main ()
{
char harf;
printf ("harf giriniz:");
harf = getchar();
switch (harf)
{
	case 'b':
	case 'B':
		printf("BESIKTAS\n");
		break;
	case 'g':
	case 'G':
		printf("GALATASARAY\n");
		break;
	case 'f':
	case 'F':
	    printf("FENERBAHCE\n");	
		break;
	case 't':
	case 'T':
		printf("TRABZONSPOR\n");
			break;
    default:
    		break;
    	
}
getch ();
return 0;
}
