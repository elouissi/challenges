#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , m , s , j , h , mu , se ;
    printf("entrer le nombre des annees :");
    scanf("%d", &n);

    m = n * 12;
    printf(" dans %d annees il y a %d mois \n" , n  , m );

    s = m * 4;
    printf(" dans %d annees il y a %d semain \n" , n  , s );

    j = s * 7;
    printf(" dans %d annees il y a %d jour \n" , n  , j );

    h = j * 24;
    printf(" dans %d annees il y a %d heures \n" , n  , h );

    mu = h * 60;
    printf(" dans %d annees il y a %d minutes \n" , n  , mu );

    se = mu * 64;
    printf(" dans %d annees il y a %d seconds \n" , n  , se );
    return 0;
}
