#include <stdio.h>
#include <stdlib.h>

int somme (int x , int y )
{
    int S ;
    S = x + y ;
    printf(" la somme  entre %d et %d : %d" , x , y , S);
    return S ;


}


int main()
{
    int n1 , n2;
    printf("entrer le premier nombre : ");
    scanf("%d", &n1);
     printf("entrer le deuxieme nombre : ");
    scanf("%d", &n2);
     int var = somme(n1,n2 );

    return 0;
}
