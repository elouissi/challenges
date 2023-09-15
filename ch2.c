#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fahrenheit , celcius ;
      printf("donner mois la temperature en fahrenheite :  \n");
      scanf("%d", &fahrenheit);
      celcius = ( fahrenheit - 32)/1.8 ;
      printf("la temperature en celcius : %d  \n ", celcius);

         if(celcius >= 40){

                printf("il fait tres chaud") ;



         }else if (celcius >=  37 &&  celcius <  40 ){


             printf("il fait chaud") ;


         }
           else if (celcius <= 10){



            printf("il fait tres frois") ;


         }else if (celcius < 37 && celcius > 10){


                printf("il fait froids") ;

         }







}
