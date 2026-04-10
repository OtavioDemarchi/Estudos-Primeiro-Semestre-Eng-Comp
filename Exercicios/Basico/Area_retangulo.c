#include <stdio.h>
#include <stdlib.h>

//Área do retângulo. Crie uma função area que recebe largura e altura e retorna a área.

int main(){

float base = 0.0f;
float lado = 0.0f;
float area = 0.0f;
int precisao = 0;

    printf("Insira o comprimento da base\n");
    scanf("%f", &base);

    printf("Insira o comprimento do lado\n");
    scanf("%f", &lado);

area = base * lado;


printf("Quantos algarismos depois da virgula?");
scanf("%d", &precisao);

    printf("A area eh %.*f", precisao, area);



}