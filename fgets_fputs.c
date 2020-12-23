#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    // ***************** file open for write ********************

    FILE *fg = fopen ("fg_fc.txt","w");
    char msg[6];

    if (fg != NULL){
        printf ("enter your message : ");
        fgets (msg, 6, stdin);
        fputs (msg, fg);
    }

    fclose (fg);

// ***************** file open for write ********************

    FILE *fr = fopen ("fg_fc.txt","r");
    char buffer[6];

    if (fr != NULL){
        while (1){
           if (feof(fr)) break;
           fread (buffer, 1, 6, fr);
        }
        printf ("message is : %s", buffer);
    }

    fclose (fg );
    return 0;
}