#include<stdio.h>
#include<string.h>

char *which_day (char *d[], int i, int sz){
    if (i <= sz)
        return *(d + i - 1);
    else
        return "overloading array size!";
}

int main (){
    char *days[7] = {"sun","mon","tue","wed","123","456","abc"};
    int w;
    do {
        printf ("please enter an indices:");
        scanf ("%d",&w);
        char *p = which_day (days, w, 7);
        printf ("%s\n",p);
    } while (w != 0);

    return 0;
}




// int len (char *p){
//     int sz = 0;
//     for (int i = 0; *(p + i) != '\0'; i++)   // *(p+i) == p[i]
//         sz++;
//     return sz;
// }
//
// int len_1(char *p){
//     int sz = 0;
//     for ( ; *(p) != '\0'; p++)   // *(p+i) == p[i]
//         sz++;
//     return sz;
// }
//
// char *cut_func (char *p, int ind){
//     int sz = strlen(p);
//     if (ind >= sz)
//         return "NULL";
//     else
//         return p + ind;
// }
