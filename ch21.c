#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n , i , kh ;
 printf("choisir un numero pour voir si il est premier ou non premier:");
 scanf("%d", &n);
  kh = 1;
  for(i=2;i<=n/2;i++){
        if(n%i==0);
    kh=0;
    break;


  }
if(kh==1    )
    printf("premier");
   else
       printf("no premier");

     return 0;

}
