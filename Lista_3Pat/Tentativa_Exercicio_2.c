#include <stdio.h>
#include <stdlib.h>

int main(){


    //2. Construir um programa para verificar entre 20 preços qual é o menor utilizando vetor.

    float precos[10];
    float menor;
    int i;

    for(i = 0; i<10; i++){

        printf("Insira o preco do %d produto\n", i+1);
        scanf("%f", &precos[i]);
    }

    menor = precos[0];

    for(i = 0; i<10; i++){

        if(precos[i] < menor){
            menor = precos[i];
        }

    }

    printf("O menor preco eh %.2f\n", menor);

    return 0;
}