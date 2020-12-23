#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
//    // ---------------------txt mode fprintf of work file-------------------------

//     FILE *fp = NULL;
    
//     fp= fopen("fw_fp_fr_fs.txt","w");
    
//     if (fp == NULL){
//         printf("Error in creating the file\n");
//         exit(1);
//     }

//     int a = 5;
//     fprintf (fp, "%d\n", a);        // this variables writing on file 

//     char a1[20] = { "hello1234" };
//     fprintf (fp, "%s\n", a1);           // this variables writing on file 

//     int a2[5] = { 1,2,3,4,5 };
//     for (int i = 0; i < 5; i++){
//         fprintf (fp, "%d ", a2[i]);           // this variables writing on file 
//     }

//     printf ("\n");
//     fclose (fp);

//    // ---------------------txt mode fscanf of work file-------------------------

//     FILE *fs = fopen("fw_fp_fr_fs.txt","r");
  
//     int p;
//     fscanf (fs, "%d\n", &p);
//     printf ("%d\n", p );

//     char p1[20];
//     fscanf (fs, "%s\n", p1);
//     printf ("%s\n", p1);

//     int p2[5];
//     for (int i = 0; i < 5; i++){
//         fscanf (fs, "%d ", &p2[i]);           // this variables writing on file 
//         printf ("%d ", p2[i]);
//     }
    
//     printf ("\n");
//     fclose (fs);
//     return 0;

    // ----------------asci-bınary mode fwrite of work file-------------------------

    FILE *fs = NULL;
    
    fs = fopen("fw_fp_fr_fs.dat","wb");
    
    if (fs == NULL){
        printf("Error in creating the file\n");
        exit(1);
    }

    int a = 1;                      
    fwrite (&a, 1, sizeof(int), fs);
    // fwrite ("\n", strlen("\n"), sizeof(char), fs);           // this variables writing on file 

    char a1[20] = { "\nhello1234" };
    fwrite (a1, strlen(a1), sizeof(char), fs);           // this variables writing on file 
 
    int a2[5] = { 1,2,3,4,5 };
    for (int i = 0; i < 5; i++) {
        fwrite (&a2[i], 5, sizeof(int), fs);           // this variables writing on file 
    }

    printf ("\n");
    fclose (fs);

    // *************** file open for read ******************

    FILE *fr= 0;

    fr = fopen ("fw_fp_fr_fs.dat","rb");

    if (fr == NULL) 
        printf ("\nfile couldnt be created");
    
    int k;                      
    fread (&k, 1, sizeof(int), fr);
    // fread("\n", strlen("\n"), sizeof(char), fr);           // this variables writing on file 
    printf ("%d\n", k);

    char k1[20] = { "\nhello1234" };
    fread (k1, strlen(k1), sizeof(char), fr);           // this variables writing on file 
    printf ("%s\n", k1);

    int k2[5] = { 1,2,3,4,5 };
    for (int i = 0; i < 5; i++) {
        fread (&k2[i], 5, sizeof(int), fr);           // this variables writing on file 
        printf ("\n%d", k2[i]);
    }

    fclose (fr);  
    printf ("\n");
    
    return 0;
}