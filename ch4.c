#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b , c , d , s , di ;

    printf("entrer le 1 nombre :");
    scanf("%d", &a);
     printf("entrer le 2 nombre :");
    scanf("%d", &b);
     printf("entrer le 3 nombre :");
    scanf("%d", &c);
     printf("entrer le 4 nombre :");
    scanf("%d", &d);

    s = a + b + c + d ;
    printf("la somme des nombre est : %d \n" , s);
    di = s/4 ;
    printf("la moyenne des nombre est : %d \n" , di);



}
