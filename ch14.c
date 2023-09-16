#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("entrer un nombre :\n");
    scanf("%d", &n);

    if(n < 0 ){
            printf("ce nombre est negatif \n");


    }else if(n == 0) {
             printf("ce nombre est null \n");


    }else if(n > 0) {
             printf("ce nombre est positif \n");


    }

    return 0;
}
