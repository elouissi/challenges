#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jour , mois , annees ;
    system("color 5A");
    printf("donnez la date d'aujourd'hui:"  );
    scanf("%d / %d / %d",&jour ,&mois ,&annees );
    system("color 1A");

     switch(mois) {
     case 1 :
            printf("la date d'aujourd'hui c'est : %d / janvier / %d",jour,annees);
            break ;

     case 2 :
            printf("la date d'aujourd'hui c'est : %d / fevrier / %d",jour,annees);
            break ;

     case 3 :
            printf("la date d'aujourd'hui c'est : %d / mars / %d",jour,annees);
            break ;

     case 4 :
            printf("la date d'aujourd'hui c'est : %d / avril / %d",jour,annees);
            break ;

     case 5 :
            printf("la date d'aujourd'hui c'est : %d / mai / %d",jour,annees);
            break ;

      case 6 :
            printf("la date d'aujourd'hui c'est : %d / juin / %d",jour,annees);
            break ;

       case 7 :
            printf("la date d'aujourd'hui c'est : %d / juillet / %d",jour,annees);
            break ;

      case 8 :
            printf("la date d'aujourd'hui c'est : %d / aout / %d",jour,annees);
            break ;

      case 9 :
            printf("la date d'aujourd'hui c'est : %d / septembre / %d",jour,annees);
            break ;


      case 10 :
            printf("la date d'aujourd'hui c'est : %d / october / %d",jour,annees);
            break ;

      case 11 :
            printf("la date d'aujourd'hui c'est : %d / novembre / %d",jour,annees);
            break ;


       case 12 :
            printf("la date d'aujourd'hui c'est : %d / decembre / %d",jour,annees);
            break ;
       default:
        break;


     }

    return 0;
}
