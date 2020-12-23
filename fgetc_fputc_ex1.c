#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    // ***************** file open for write ********************

    FILE *fp = fopen ("fg_fp_extra.txt","w");
    
    char *x;
    x = (char*)malloc(sizeof(char) * 8); 

    printf ("\nenter characters : ");
    scanf ("%s", x);

    if (fp!= NULL){
        for (int i = 0; i < strlen(x); i++) {
            fputc (*(x + i), fp); 
            printf ("\n%c", *(x + i));
        }
    }
    fclose (fp);

    // ***************** file open for read ********************

    FILE *fg = fopen ("fg_fp_extra.txt","r");

    char *y;
    y = (char*)malloc(sizeof(char) * 8); 

    printf ("\nentered characters : \n");

    if (fg!= NULL){
        while (1){
            *y = fgetc (fg); 
            if (feof(fg)) break;
            printf ("%c\n", *y );
        }
    }
    fclose (fg);
    return 0;
}