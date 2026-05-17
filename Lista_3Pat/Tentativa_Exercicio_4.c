#include <stdio.h>
#include <stdlib.h>

int main(){

    //Construir um programa que calcule a soma dos números ímpares;

int numero;
int soma;

int i = 0;

        printf("xXSoma dos numeros imparesXx\n");

        printf("Insira os numeros e somente os impares serao somandos, para ver a soma pressione 0\n");
    while(numero != 0){
        scanf("%d", &numero);

        if(numero % 2 != 0){
            soma += numero;       
        }
    }
    printf("A soma deu %d\n", soma);

    return 0;
}