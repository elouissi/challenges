#include <stdio.h>
#include <stdlib.h>

int main()
{

     int a , b , c , delta , x1 , x2 , x;


    printf("entrer la valeur de a :\n");
    scanf("%d", &a);

    printf("entrer la valeur de b :\n");
    scanf("%d", &b);

    printf("entrer la valeur de c :\n");
    scanf("%d", &c);

    delta = pow((b),2)-(4*a*c) ;
    printf("delta est : %d \n" , delta);

    if(delta < 0 ){

        printf("l'equation n'a pas de solution ");

    } else if (delta == 0){


         x = -b/2*a ;
         printf("l'equation a une solution c'est x = %d",  x);
    }
    else if (delta > 0){
            x1 = (-pow((b), 2)-sqrt(delta)) /(2 * a)  ;
            x2 = (-pow((b), 2)+sqrt(delta)) /(2 * a)   ;

         printf("la premier  solution c'est x1 = %d \n",  x1 );
          printf("la deuxieme solution c'est x2 = %d", x2 );
    }
    return 0;
}
