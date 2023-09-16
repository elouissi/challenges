#include <stdio.h>
#include <stdlib.h>

int main()
{

    int m ;
    printf("vueillez entrer votre moyenne :\n");
    scanf("%d", &m);

    if( m < 10 ){
        printf("vous etes recale ");
    }
    else if( m >= 10 && m < 12){
        printf("votre mention c'est passable");

    }
     else if( m >= 12 && m < 14){
        printf("votre mention c'est  assez bien");

    }
     else if( m >= 14 && m < 16){
        printf("votre mention c'est bien");
          }
     else if( m >= 16 ){
        printf("votre mention c'est tres bien ");
    }
}
