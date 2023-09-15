
    #include <stdio.h>
#include <stdlib.h>


int main( )
{

  char nom   [100] ;
  char prenom   [100] ;
  char sexe   [100] ;
  int age ;
  int numero ;
  printf("Quel nom avez-vous ? ");
  scanf("%s", &nom);


  printf("Quel prenom avez-vous ? ");
  scanf("%s", &prenom);


  printf("votre sexe s'il vous plait ? ");
  scanf("%s", &sexe);

  printf(" quel est votre age :");
  scanf("%d", &age);


  printf(" votre numero s'il vous plait");
  scanf("%d", &numero);


  printf(" bonjour, %s %s !\n", nom, prenom);
  printf("vous avez, %d  \n" , age);
  printf("votre sexe est : %s \n" , sexe);
  printf("finalement votre numero est : %d" , numero);


  return 0;

}
