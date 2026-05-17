#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 0;
    int a[10];

    printf("---Vetor 1---\n");

    for(i; i<= 5; i++){

        printf("Qual o %d valor\n", i+1);
        scanf("%d", &a[i]);
    }

    for(i = 0; i<=5; i++){
        printf("O valor da %d posicao = %d\n", i+1, a[i]);
    }

    return 0;
}