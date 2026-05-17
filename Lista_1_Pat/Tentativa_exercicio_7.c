#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

//7 - Crie um programa de sua escolha que utilize if

    int sono = 0;

    printf("Quantas horas de sono voce geralmente tem?\n");
    scanf("%d", &sono);

    if(sono < 8){

        printf("Voce precisa dormir mais");

    }

    else if(sono > 10){

        printf("Voce esta dormindo demais");

    }

    else{

        printf("Voce esta dormindo de maneira adequada");

    }

    return 0;
}