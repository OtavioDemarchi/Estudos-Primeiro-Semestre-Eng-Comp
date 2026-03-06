#include <stdio.h>

int main(){

    /*9 - Construir um programa em C para ler a idade de 5 pessoas e descobrir qual é a maior e a menor idade;*/

    int idade, maior, menor, i, pessoas = 0;


    //printf("Quantas pessoas serao inseridas?");
    //scanf("%d", &pessoas);


    printf("Insira a idade da 1a pessoa:\n");   
    scanf("%d", &idade);

    for(i = 1; i < 5; i++){

    printf("Digite a idade da %da pessoa:\n", i+1);
    scanf("%d", &idade);

    if(idade > maior){

        maior = idade;
    }
    if(idade < menor){

        menor = idade;
    }
    }
    printf("Maior idade: %d anos\n", maior);
    printf("Menor idade: %d anos", menor);


    return 0;
}