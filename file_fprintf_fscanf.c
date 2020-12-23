#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    // -----------------------write of work file-------------------------

    FILE *fp_out = fopen("file1.txt","w");
    
    int i = 5;
    float f = 9.98;
    fprintf (fp_out, "%d %f\n", i, f);        // this variables writing on file 
    
    char a1[20] = { "123456781011" };
    fprintf (fp_out, "%s\n", a1);           // this variables writing on file 

    int a2[5] = { 1,2,3,4,5 };
    for (int i = 0; i < 5; i++){
        fprintf (fp_out, "%d ", a2[i]);           // this variables writing on file 
    }

    // printf("%ld\n", ftell(fp_out));       // cursor state 
    printf("\n");
    fclose(fp_out);

    // -----------------------read of work file--------------------------

    FILE *fp_in = fopen("file1.txt","r");
  
    int p;
    float k;   
    fscanf (fp_in, "%d %f", &p, &k);
    printf ("%d %f\n", p, k );

    char ad1[20];
    fscanf (fp_in, "%s\n", ad1);
    printf ("%s\n", ad1);

    int ad2[5];
    for (int i = 0; i < 5; i++){
        fscanf (fp_in, "%d ", &ad2[i]);           // this variables writing on file 
        printf ("%d ", ad2[i]);
    }
    
    //printf("%ld\n", ftell(fp_in));
    printf ("\n");
    fclose (fp_in);
    
    return 0;
}