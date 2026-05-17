#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    
    float preco = 19.99;

    printf("%.2f\n", preco); //o ponto depois do % especifica quantos algarismo após o ".", quantos decimais.

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%3d\n", num1);
    printf("%4d\n", num2);
    printf("%5d\n", num3); 

    //o numero antes do d especifica quantos caracteres o output deve ter, incluindo os espaços

    int num4 = 2 ; 

    printf("%-4d\n", num4); //coloca espaço depois do numero ao invés de antes.

    return 0;
}





