#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592654

int main()
{
    float v1, v2, betrag, winkelRAD, winkelDEG;


    printf("Bitte die x1 Koordinate eingeben:");
    scanf("%f", &v1);

    printf("Bitte die x2 Koordinate eingeben:");
    scanf("%f", &v2);

    betrag = sqrt((v1*v1)+(v2*v2));
    printf("Der Betrag des Vektors: \n[%.2f]\n[%.2f] = %.3f \n", v1, v2, betrag);

    winkelRAD = acos(v1/betrag);
    winkelDEG =(winkelRAD/PI)*180;

    printf("\nDer Winkel des Vektors: \n[%.2f]\n[%.2f] betraegt: %.3f Grad\n", v1, v2, winkelDEG);
    return 0;
}
