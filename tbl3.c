#include <stdio.h>
#include <stdlib.h>

int main()
{

    int T[10];
    int i  , j , tmp;
    printf(" vuiellez entrer les nombre de chaque case : \n");

    for(i=0;i<10;i++){

        printf("T[%d] : ", i+1);
        scanf("%d", &T[i]);
    }

     for(i=0;i<9;i++){
          for(j=i+1;j<9;j++){
                if(T[i] > T[j]){

                tmp = T[i];
                T[i] = T[j];
                T[j] = tmp;

                }
}


     }
     printf("\n les element du tableau par ordre croissant est ");
     for(i=0;i<10;i++){
            printf("%d :  " , T[i]);

     }


    return 0;
}
