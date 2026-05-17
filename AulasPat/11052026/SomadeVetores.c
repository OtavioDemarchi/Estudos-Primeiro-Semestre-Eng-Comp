#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 0;
    int a[10];
    int b[10];
    int soma[10];

    printf("---SOMA DE VETORES---\n");

    printf("---Vetor 1---\n");

    for(i = 0; i<= 5; i++){

        printf("Qual o %d valor\n", i+1);
        scanf("%d", &a[i]);
    }

    printf("---Vetor 2---\n");

    for(i = 0; i<= 5; i++){

        printf("Qual o %d valor\n", i+1);
        scanf("%d", &b[i]);
    }

    for(i = 0; i<= 5; i++){

        soma[i] = a[i] + b[i];

    }

    int menor = soma[0];
    int maior = soma[0];

    for(i = 0; i<= 5; i++){

        printf("Soma %d = %d\n", i+1, soma[i]);

    }

    for(i=0;i<=5;i++){

        if(soma[i] > maior){
        maior = soma[i];
    }
}

    for(i=0;i<=5;i++){

        if(soma[i] < menor){
        menor = soma[i];
    }
}

    printf("O menor valor da soma dos vetores eh: %d\n", menor);
    printf("O maior valor da soma dos vetores eh: %d\n", maior);
    
    return 0;
}