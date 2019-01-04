#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i,j,x=10,y=10,r=4;

    for(i=1;i<=20;i++)
    {
        for(j=1;j<=20;j++)
        {
            if((x-i)*(x-i)+(y-j)*(y-j)<=(r-1)*(r-1))
                printf(" ");
            else if((x-i)*(x-i)+(y-j)*(y-j)<r*r)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

	return 0;
}
