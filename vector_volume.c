#include<stdio.h>
#include<stdlib.h>
int hacim(int u[],int v[],int w[]);

int main ()
{   int j,k;
	int u[3]={1,2,3}, v[3]={3,2,1}, w[3]={1,-2,1};
	       for (k=0;k<=2;k++)
	        {
	        	 if (k==0)
	        	 printf ("u=>");
	        	 
				 else if(k==1)
	        	 printf ("v=>");
	        	 
				 else
	        	 printf ("w=>");
	              
				  
				  for (j=0;j<=2;j++)
	           { 
	              if (k==0)
	              printf ("(%d) ",u[j]);
	              
				  else if (k==1)
	              printf ("(%d) ",v[j]);
	              
				  else
	              printf ("(%d) ",w[j]);
					  
			   }
			   printf("\n");
	        }       
	printf ("hacim(determinant)=%d",hacim(u,v,w));
   	return 0;
}
int hacim(int u[],int v[],int w[])
{
	int c[3],i,toplam=0,top1=0;
	
	c[0]=v[1]*w[2]-v[2]*w[1];
	c[1]=v[0]*w[2]-v[2]*w[0];
	c[2]=v[0]*w[1]-v[1]*w[0];
	
	for (i=0;i<=2;i++)
	{
		top1=c[i]*u[i];
		   if (i%2==0)
		      top1=-top1;
		toplam=toplam+top1;
		
	}	
	return toplam;
}
