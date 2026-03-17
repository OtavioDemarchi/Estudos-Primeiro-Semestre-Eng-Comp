#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

//5 - Construa um programa para mostrar somente números pares;

int num1, num2, num3, num4, num5 = 0;

printf("Insira cinco numeros: ");

scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

printf("xX NUMEROS PARES Xx\n");

    if(num1 % 2 == 0) {
    printf("%d\n", num1);
    }

    if(num2 % 2 == 0) {
    printf("%d\n", num2);
    }

    if(num3 % 2 == 0) {
    printf("%d\n", num3);
    }

    if(num4 % 2 == 0) {
    printf("%d\n", num4);
    }

    if(num5 % 2 == 0) {
    printf("%d\n", num5);
    }
    

    return 0;
}

