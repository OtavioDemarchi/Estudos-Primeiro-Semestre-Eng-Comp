#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int dias = 0;
    int precodias = 0;
    int tripulantes = 0;
    int precotripulantes = 0;
    int pacote = 0;
    int total = 0;
    char nome[19] = "\0";



    printf("Qual o nome do comandante?\n");
    scanf("%s", &nome);

    tripulantes:
    printf("Quantos tripulantes?\n");
    scanf("%d", &tripulantes);


    if(tripulantes <= 0){

        printf("INSIRA AO MENOS UM TRIPULANTE\n");
        goto tripulantes;
    }

    printf("Quantos dias ira ficar em orbita?\n");
    scanf("%d", &dias);

    printf("Qual pacote gostaria de escolher?\n1 - BASICO: R$ 50.000.000 POR TRIPULANTE\n2 - CIENTIFICO: R$80.000.000 POR TRIPULANTE\n3- PREMIUM: R$ 120.000.000 POR TRIPULANTE\n");
    scanf("%d", &pacote);

    switch(pacote){
        case 1:

        precotripulantes = 1 * 50000000 + 10000000 + (200000 * dias);

        break;

        case 2:

        precotripulantes = 1 * 80000000 + 10000000 + (200000 * dias);

        break;

        case 3:

        precotripulantes = 1 * 120000000 + 10000000 + (200000 * dias);

        break;

        default:

        printf("Insira um comando valido!\n");
        goto fim;

    }

        for(int i = 0; i < tripulantes; i++){

        printf("\nTripulante %d confirmado", i+1);

    }

    printf("\nxXResumo da missaoXx\n");

    printf("\nO nome do comandante eh %s\n", nome);
    printf("A quantidade de tripulantes eh %d\n", tripulantes);
    printf("A quantidade de dias em orbita eh %d\n", dias);

    if(pacote == 1){
        printf("O pacote escolhido foi o BASICO\n");
    }

    else if(pacote == 2){
        printf("O pacote escolhido foi o CIENTIFICO\n");
    }

    else {
        printf("O pacote escolhido foi o PREMIUM\n");
    }

    total = precotripulantes * tripulantes;

    printf("O valor POR TRIPULANTE eh R$ %d\n", precotripulantes);

    printf("O valor TOTAL EH R$ %d", total);

fim:
    return 0;
}
