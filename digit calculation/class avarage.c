#include <stdio.h> 
#include <conio.h> 
int i,j,k,m; 
main() 
{ 
for(i=1;i<=9;i++) 
for(j=0;j<=9;j++) 
for(k=0;k<=9;k++)
for(m=0;m<=9;m++) 
if ((i+j)==(k+m)) 
printf("%d\t",1000*i+100*j+10*k+m); 
getch();
 }
