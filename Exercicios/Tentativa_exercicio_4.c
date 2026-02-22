#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//4 - Construir um programa em C para calcular o volume de um cubo (Comprimento * Largura* Altura)

int main(){

    float Comprimento = 0 ;
    float Largura = 0 ;
    float Altura = 0;
    float Volume = 0;

    printf("Qual o comprimento (em centimetros) do seu cubo?: ");
    scanf("%f", &Comprimento);

    printf("Qual a largura (em centimetros)  do seu cubo?: ");
    scanf("%f", &Largura);

    printf("Qual a altura (em centimetros)  do seu cubo?: ");
    scanf("%f", &Altura);

    Volume = Comprimento * Largura * Altura;

    printf("O volume do seu cubo: %.2f", Volume);

    return 0 ;
}