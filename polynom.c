#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, d, x, berechnen, hr;

    printf("a:");
    scanf("%f", &a);

    printf("b:");
    scanf("%f", &b);

    printf("c:");
    scanf("%f", &c);

    printf("d:");
    scanf("%f", &d);

    printf("Dein Polynom Dritten grades lautet:\ng(x)=%.2fx^3+%.2fx^2+%.2fx+%.2f\n", a, b, c, d);

    printf("\nBitte einen X wert eingeben:\n");
    scanf("%f", &x);


    berechnen = a*(x*x*x)+b*(x*x)+c*x+d;
    printf("\ng(%.2f)=%.2f\n", x, berechnen);

    hr = ((a*x+b)*x+c)*x+d;
    printf("\nNach dem Horner schema: g(%.2f)=%.2f\n\n\n", x, hr);

    return 0;
}
