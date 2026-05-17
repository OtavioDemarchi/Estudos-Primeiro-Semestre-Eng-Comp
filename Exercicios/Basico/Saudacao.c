#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Saudação personalizada. Crie uma função saudar que recebe um nome e imprime "Olá, [nome]!".

int main(){

char nome[20] = "\0";


printf("Qual seu nome?\n");
scanf("%s", &nome);

printf("Ola %s", nome);

    return 0;
}