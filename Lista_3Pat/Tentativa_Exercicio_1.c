#include <stdio.h>
#include <stdlib.h>

int main(){

//1. Escrever um programa para ler o preço de 50 produtos e listar todos os preços no final.

float produtos [50];

int i = 0;

for(i = 0; i < 50; i++){

    printf("Insira o preco do produto %d\n", i+1);
    scanf("%f", &produtos[i]);

}

for(i = 0; i < 50; i++){

    printf("Preco do produto %d = %.2f\n", i+1, produtos[i]);

}

    return 0;
}