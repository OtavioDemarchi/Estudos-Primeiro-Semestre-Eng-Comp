#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//1 – Construir um programa em C para ler a idade de 2 pessoas e descobrir qual é a maior e qual é a menor idade;


int main() {

    char Nome[20] = "" ;
    int Idade = 0 ;

    char Nome2[20] = "" ;
    int Idade2 = 0 ;


    printf("Insira o nome X:");
    scanf("%s", &Nome);

    printf("Insira idade X:");
    scanf("%d", &Idade);

    printf("Insira nome Y:");
    scanf("%s", &Nome2);

    printf("Insira idade Y:");
    scanf("%d", &Idade2);

    if(Idade > Idade2)
    printf("%s tem a maior idade, %d", Nome, Idade) ;
        else
        printf("%s tem a maior idade, %d", Nome2, Idade2);


    return 0;
}