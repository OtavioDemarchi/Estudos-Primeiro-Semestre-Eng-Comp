#include <stdio.h>
#include <stdlib.h>

int main() {

    //14 - O programa abaixo não está executando corretamente e precisa ser arrumado Identifique e CIRCULE os erros e depois REESCREVA o programa de forma correta.

    int idade;

    printf ("Digite a sua idade\n");

    scanf("%d", &idade);

    if(idade <= 12){

    printf("Voce tem %d e eh uma crianca\n", idade);}

    else if(idade <= 19){

    printf("Voce tem %d e eh um adolescente\n", idade);}

    else if(idade <= 60){

    printf("Voce tem %d e eh um adulto\n", idade);
        }
    else
    printf("Voce tem %d e eh um idoso\n", idade);
    

    return 0;
}

