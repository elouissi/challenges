#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10];
    int i , min, max ;
    printf(" vuiellez entrer les nombres :  \n");
    for(i=0;i<10;i++){

        printf("T[%d] = " , i);
        scanf("%d", &T[i]);

}
  min=T[0];
  for(i=1;i<10;i++){
    if(min > T[i])
         min = T[i];


   }
   max = T[0];
   for(i=1;i<10;i++){
    if(max < T[i])
        max = T[i];
   }
       printf("la valeur minimale : %d" , min);
       printf("la valeur maximale : %d" , max);


    return 0;
}
