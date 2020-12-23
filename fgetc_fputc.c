#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    // ***************** file open for write ********************

    FILE *fp = fopen ("fgc_fpc.txt","w");
    
    char x;
    printf ("\nenter char : ");
    scanf ("%c", &x);

    if (fp!= NULL){
        fputc (x, fp); 
        // printf ("%c\n", x);
    }
    fclose (fp);

    // ***************** file open for read ********************


    FILE *fg = fopen ("fgc_fpc.txt","r");

    char y;
    printf ("\nentered char is : ");

    if (fg!= NULL){
        while (1){
            y = fgetc (fg); 
            if (feof(fg)) break;
            printf ("%c\n", y );
        }
    }
    fclose (fg);
    return 0;
}