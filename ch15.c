#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chi ;
    printf("entrer une alphabet s'il vous plait :\n");
    scanf("%c" , &chi);

    //chi = "%d";

    if( chi >= 'a' && chi <= 'z') {

        printf("votre alphabet est  miniscule");
    }
    else
        printf("votre alphabet est majuscule");

    return 0;
}
