// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(){

//     char name[3] = "cgr";

//     printf("Name = %s\n", name );

//     char *str;
//     str = (char*)malloc(10*sizeof(char));    
//     str = "hello cgr";

//     printf("Address: %s\n", str);
    
//     free(str);

//     return 0;
// }

#include <stdio.h> 
#include <stdlib.h> 
  
int main() { 
    
    // Statical array is creating 
    int n = 5, p[n];

    printf("\nEnter number of elements: %d\n", n); 
    for (int i = 0; i < n; ++i) { 
            p[i] = i + 1; 
    } 

    printf("\nThe elements of the array are: "); 
    for (int i = 0; i < n; ++i) { 
        printf("\n%d", p[i]); 
    } 

    int *ptr;
    
    // Dynamically allocate memory using malloc() 
    ptr = (int*)malloc(sizeof(int) * n); 
  
    // Check if the memory has been successfully 
    // allocated by malloc or not 
    if (ptr == NULL) { 
        printf("\nMemory not allocated.\n"); 
        exit(0); 
    } 
    else { 
        // Memory has been successfully allocated 
        printf("\nMemory successfully allocated using malloc.\n"); 
            printf("\nEnter number of elements: %d\n", n); 
        for (int i = 0; i < n; ++i) { 
                // ptr[i] = i + 1; 
                *(ptr + i) = i + 1;
        } 
       *(ptr + 5) = 10;     // this value depends a chance
       ptr[6] = 20;         // this value depends a chance

        printf("\nThe elements of the array are: "); 
        for (int i = 0; i <= n+1; ++i) { 
            // printf("\n%d", ptr[i]); 
            printf ("\n%d", *(ptr + i));
        } 

    } 
    free(ptr);
    printf("\n");
    return 0; 
} 