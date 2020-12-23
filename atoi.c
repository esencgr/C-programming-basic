// #include<stdio.h>
// #include <stdlib.h>
// #include<string.h>
// int main() {
//     // Converting a numeric string
//     char str[10] = "122";
//     int x = atoi(str);
//     printf("Converting '122': %d\n", x);

//     // Converting an alphanumeric string
//     char str2[10] = "Hello!";
//     x = atoi(str2);
//     printf("Converting 'Hello!': %d\n", x);

//     // Converting a partial string
//     char str3[10] = "09Hello!";
//     x = atoi(str3);
//     printf("%ld", strlen(str3));

//     printf("Converting '99Hello!': %d\n", (int)(str3[0])-48);
//     return 0;
// }
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char *str;
    str = (char*) malloc(sizeof(char) * 1000);
    
    scanf ("%s", str);
    
    int arr[10] = {0};
    int size = strlen(str);
    

    for (int i = 0; i < size; i++){
        for (int j = 0; j < 10; j++){
            if (((int)(str[i]) - 48) == j){
                arr[j]++;
            }
        }
    }     
    
    for (int i = 0; i < 10; i++) {
        printf ("%d ", arr[i]);
    } 

    return 0;
}
