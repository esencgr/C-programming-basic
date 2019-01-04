#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
   
   double cevreHesapla(double yaricap);
   double alanHesapla(double yaricap);
   
int main()
{
	 double r=10.52;
	 printf ("yaricap:%f\n",r);
     printf ("cevre=%.2f\n",cevreHesapla(r));
	 printf ("alan=%.2f",alanHesapla(r));
	 
	 return 0;
	
}

double cevreHesapla(double yaricap)
{   
    double cevre;
    cevre=2*PI*yaricap;
    return cevre;
}
double alanHesapla (double yaricap)
{   
     
    double alan ;
	alan=PI*yaricap*yaricap;
    return  alan;
   
}


