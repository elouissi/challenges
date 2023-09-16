#include <stdio.h>
#include <stdlib.h>

int main()
{

   int n1 , n2 , s;

    printf(" entrer la valeur du premier numero : \n");
    scanf("%d", &n1 );

    printf(" entrer la valeur du deuxieme numero : \n");
    scanf("%d", &n2 );

    s = n1 + n2 ;


    printf("la somme c'est : %d \n", s);



    if ( n1 == n2){
            printf("le triple de la somme est : %d ", s * 3);


    }

    return 0;
}
