#include <stdio.h>
#include <stdlib.h>

int main()
{
    long n1 , n2 , n3 ;
    printf("entrer le 1 numero: ");
    scanf("%ld", &n1 );
    printf("entrer le 2 numero: ");
    scanf("%ld", &n2 );
    printf("entrer le 3 numero: ");
    scanf("%ld", &n3 );
    printf("voici votre numero : %ld%ld%ld \n", n1,n2,n3);

    printf("voici l'opposer de votre numero : %ld%ld%ld ", n3,n2,n1);


    }
