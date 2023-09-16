#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c ;
    printf("entrer un carractere \n");
    scanf("%c", &c);

    if( c > 'a' && c < 'z' ||  c > 'A' && c < 'Z') {

        printf("votre carractere est une alphabet \n");

    }else
           printf("votre carractere est un nombre \n");

      if( c >= 'a' && c <= 'z') {

        printf("votre alphabet est  miniscule \n");
    }
    else
        printf("votre alphabet est majuscule \n");

}
