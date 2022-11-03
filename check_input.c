#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    c = getchar();


    if(c >= 33, c <= 47 )
    {
        printf("\n%c ist ein Symbol", c);
    }

    else if(c >= 48, c <= 57)
    {
        printf("\n%c ist eine Zahl", c);
    }

    else if(c >= 58, c <= 64)
    {
        printf("\n%c ist ein Sonderzeichen", c);
    }

    else if(c >= 65, c <= 90)
    {
        printf("\n%c ist ein Grossbuchstabe", c);
    }

    else if (c >= 91, c <= 96)
    {
        printf("\n%c ist ein Sonderzeichen", c);
    }

    else if (c >= 97, c <= 122)
    {
        printf("\n%c ist ein Kleinbuchstabe", c);
    }

    else if( c >= 123, c <= 126)
    {
        printf("\n%c ist ein Sonderzeichen", c);
    }
    else
        printf("ASCII value of %c = %d", c, c);


    return 0;
}
