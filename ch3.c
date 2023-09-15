#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a , b ;
    double d ;


    printf("entrer la valeur de a :\n");
    scanf("%d",&a);
    printf("entrer la valeur de b :\n");
    scanf("%d",&b);

      d = a / b ;
      printf("la somme des nombres : %d \n", a + b);
      printf("la difference des nombres : %d \n", a - b);
      printf("le multiple entre ces nombres : %d \n", a * b);
      printf("la division des nombres: %.1lf \n", d );
      printf("la reste de la division des nombres : %d \n", a % b);


    return 0;

}
