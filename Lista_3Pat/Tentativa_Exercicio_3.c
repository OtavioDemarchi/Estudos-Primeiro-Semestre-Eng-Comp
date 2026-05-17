#include <stdio.h>
#include <stdlib.h>

int main(){

//3. Faça um programa que tenha for, if e vetores;

    int gatinhos = 0;

    printf("Quantos gatinhos voce tem?\n");
    scanf("%d", &gatinhos);

int idadeGatinhos[gatinhos];

    if(gatinhos == 0){
        printf("Quet tal adotar um?\n");
    }

    else if(gatinhos == 1){
        printf("Voce tem poucos gatinhos! Que tal adotar mais um?\n");
    }

    else if(gatinhos <= 2 && gatinhos !=0){

        printf("Qual a idade dos seus gatinhos?\n");

        for(int i = 0; i < gatinhos; i++){

            printf("Qual a idade do gatinho numero %d? (em meses)\n", i+1);
            scanf("%d", &idadeGatinhos[i]);

        }

        for(int i = 0; i < gatinhos; i++){
            printf("Idade do gatinho %d = %d meses\n", i+1, idadeGatinhos[i]);
        }

    }
    else{
        printf("Voce tem muitos gatinhos! Parabens!\n");

        printf("Qual a idade dos seus gatinhos?\n");

        for(int i = 0; i < gatinhos; i++){

            printf("Qual a idade do gatinho numero %d? (em meses)\n", i+1);
            scanf("%d", &idadeGatinhos[i]);

        }

        for(int i = 0; i < gatinhos; i++){
            printf("Idade do gatinho %d = %d meses\n", i+1, idadeGatinhos[i]);
        }
    }

    return 0;
}