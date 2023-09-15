#include <stdio.h>
#include <stdlib.h>

int main()
{

    float x1 , x2 , y1 , y2 , d;


     printf("veuilez entrer les coordonnés du point A \n");
     printf("la valeur de x1 : \n");
     scanf("%f", &x1);
     printf("la valeur de y1 : \n");
     scanf("%f", &y1);
      printf("veuilez entrer les coordonnés du point B \n");
     printf("la valeur de x2 : \n");
     scanf("%f", &x2);
     printf("la valeur de y2 : \n");
     scanf("%f", &y2);

     d = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2)) ;

     printf("la distance entre A et B c'est : %f", d);




}
