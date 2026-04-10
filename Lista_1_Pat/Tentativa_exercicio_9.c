#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

//9 – Construa um programa que digite 2 números, se o primeiro for igual ao segundo, escreva, os números são iguais, se o primeiro for maior que o segundo, escreva o primeiro número é maior, se o primeiro for menor que o segundo, escreva, o segundo número é maior;

    int num1, num2 = 0;

    printf("Insira dois numeros: ");
    scanf("%d %d", &num1, &num2);

    if(num1 == num2){

        printf("Os numeros sao iguais. %d = %d", num1, num2);
    }

    else if(num1 > num2){

        printf("O primeiro numero eh maior. %d > %d", num1, num2);
    }

    else{

        printf("O segundo numero eh maior. %d > %d", num2, num1);
    }

    return 0;
}