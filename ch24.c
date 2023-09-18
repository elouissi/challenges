#include<stdio.h>


int main() {

    int lNum;

    printf("Enter number of lines: ");
    scanf("%d", &lNum);

    for (int i = 0; i <= lNum; i++) {

        for (int y = 0; y < lNum - i; y++) {
            printf(" ");
        }
        for (int w = 0; w < (i * 2) - 1; w++) {
        printf("*");
        }

        printf("\n");
    }

    return 0;
}
