#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

    system("color 04");
    srand(time(NULL));

    int i= rand() % 7 + 1    ;




    switch (i){
        case 1 :
            printf("lundi");
            break;

             case 2 :
            printf("mardi");
            break;

             case 3 :
            printf("mercredi");
            break;

             case 4 :
            printf("jeudi");
            break;

             case 5 :
            printf("vendredi");
            break;

             case 6 :
            printf("samedi");
            break;

             case 7 :
            printf("dimanch");
            break;

    }
    return 0;
}
