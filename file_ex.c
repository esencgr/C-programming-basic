#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //file pointer
    FILE *fp = NULL;
    //Message
    char * message = " --> I love Aticleworld.com";
    //Variable for message length
    int length = 0;
    //create and open the binary file
    fp = fopen("file_ex.dat", "wb");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    //Get the length of message
    length = strlen(message);
    //write the message len in file
    fwrite(&length, sizeof(int), 1, fp);

    //write message in file
    fwrite(message, sizeof(char),length, fp);
    fclose(fp);
    return 0;
}


// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     //file pointer
//     FILE *fp = NULL;
//     //Message
//     char * message = "I love Aticleworld.com";
//     //Variable for message length
//     int length = 0;
//     //create and open the texr file
//     fp = fopen("file_ex.txt", "w");
//     if(fp == NULL)
//     {
//         printf("Error in creating the file\n");
//         exit(1);
//     }
//     //Get the length of message
//     length = strlen(message);
//     //write the length in file
//     fprintf(fp,"%d --> ",length);
//     //write the message in file
//     fprintf(fp,"%s",message);
//     //Close the file
//     fclose(fp);
//     return 0;
// }