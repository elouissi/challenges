#include <stdio.h>
#include <stdlib.h>



int main()
{
 int n , i , s;
 printf("entrer un nombre :");
 scanf("%d", &n);
    for(i=1;i<=10;i++){

        s = n * i;
        printf(" %d x %d= %d \n",n,i,s);
    }

       return 0;

}
