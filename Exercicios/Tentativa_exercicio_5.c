#include <stdio.h>
#include <stdlib.h>
#include <math.h>   

int main (){

//6 - Construa um programa para mostrar somente números impares;

//AS QUESTÕES 5 E 6 ESTÃO TROCADAS VOU ARRUMAR ASSIM QUE POSSIVEL

int num1, num2, num3, num4, num5 = 0;

printf("Insira cinco numeros: ");

scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

printf("xX NUMEROS IMPARES Xx\n");

    if(num1 % 2 != 0) { //!= indica "diferente de, nesse caso seria "se o resultado for diferente de 0"
    printf("%d\n", num1);
    }

    if(num2 % 2 != 0) {
    printf("%d\n", num2);
    }

    if(num3 % 2 != 0) {
    printf("%d\n", num3);
    }

    if(num4 % 2 != 0) {
    printf("%d\n", num4);
    }

    if(num5 % 2 != 0) {
    printf("%d\n", num5);
    }
    

    return 0;
}
