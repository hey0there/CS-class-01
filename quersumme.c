#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned short number, quersumme;


    printf("Bitte geben Sie eine Zahl zwischen 100 und 999 ein:\n", &number);

    scanf("%hu", &number);

    quersumme = number/100+(number/10)%10+number%10 ;
    printf("Die Quersumme ist: %hu ",quersumme);
    return 0;
}

