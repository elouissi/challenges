#include <stdio.h>
#include <stdlib.h>



int main()
{
 int n ;
 int s = 0 ;
 printf("entrer un nombre :");
 scanf("%d",&n);
 do{
    s = (s*10) + (n%10);
    n =n / 10 ;

 }while( n !=0);
 printf("l'oppose de ce nombre c'est  :%d", s);

  return 0;

}
