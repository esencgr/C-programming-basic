#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[10];

    // Dynamically allocate memory using malloc() 
    // char *str;
    // str = (char*)malloc(100 * sizeof(char));    

    // // Dynamically allocate memory using calloc() 
    // char *str;
    // str = (char *)calloc(15, sizeof(char)); 

    printf ("enter your message : ");
    scanf ("%s", str);
    printf ("string is : %s\n", str);
    printf ("size of string : %ld\n", sizeof(str));
 
    // free(str);

    return 0;
}