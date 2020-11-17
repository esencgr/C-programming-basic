#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main (){

		int test;
		scanf("%d", &test);

	  for (int i=0; i<test; i++){
				char word[10000];
				scanf ("%s",word);

				for (int k=0; k<strlen(word); k++)
						if (k % 2 == 0)
							 printf("%c", word[k] );

		}



	return 0;
}
// char isim [100];
// printf ("isminizi giriniz:");
// scanf ("%s",&isim);
//
// printf ("hosgeldin %s !!",isim);
// return 0;
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
