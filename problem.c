#include<stdio.h>
int main(int argc, char const *argv[]) {

    int x, y, z;

    printf("enter three pot :");
    scanf("%d %d %d", &x, &y, &z);

    double avr = 1.0/x + 1.0/y - 1.0/z;
    printf("%f\n", avr);

    double hours = 1/avr;
    printf("%f\n", hours);

    double minute = hours*60;
    printf("%f", minute);


    return 0;
}
