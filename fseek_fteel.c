#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    // -----------------------write of work file-------------------------

    FILE *fp_out = fopen("ftell_fseek.txt","w");
    
    char a1[20] = { "123456781011" };
    fprintf (fp_out, "%s\n", a1);           // this variables writing on file 

    fseek (fp_out , 2, SEEK_CUR);

    int a2 = 5;
    fprintf (fp_out, "%d\n", a2);           // this variables writing on file 

    printf("%ld\n", ftell(fp_out));       // cursor state 
    
    printf("\n");
    fclose(fp_out);

    // -----------------------read of work file--------------------------

    FILE *fp_in = fopen("ftell_fseek.txt","r");

    char ad1[20];
    fscanf (fp_in, "%s\n", ad1);
    printf ("%s\n", ad1);

    int ad2;
    fscanf (fp_in, "%d\n", &ad2);
    
    printf("%ld\n", ftell(fp_in));
    printf ("\n");
    fclose (fp_in);
    
    return 0;
}