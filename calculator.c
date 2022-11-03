#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    short number1,number2;
    char mathsymbol;

    printf("Zahl eingeben fuer 1:\n");
    scanf("%hd", &number1);

    printf("Zahl eingeben fuer 2:\n");
    scanf("%hd", &number2);

    printf("Mathe Operator eingeben:\n");
    scanf(" %c", &mathsymbol);


    if(mathsymbol == '+')
        {

        printf("Die Summe ist: %hd \n",(number1+number2));
        }

    else if(mathsymbol =='-')
        {
        printf("Die Summe ist: %hd\n", (number1-number2));
        }

    else if(mathsymbol =='*')
        {
        printf("Die Summe ist: %hd\n", (number1*number2));
        }
    else if(mathsymbol =='/' && number1%number2==0)
        {
        printf("Die Summe ist: %hd\n", (number1/number2));
        }else printf("Summe ist:%hd\nRest ist: %hd", number1/number2, number1%number2);

   return(0);
}
