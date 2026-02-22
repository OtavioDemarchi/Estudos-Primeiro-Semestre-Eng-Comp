#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//3 - Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão é: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius

int main(){

    float TempCelsius = 0;
    float TempFahr = 0;

    printf("Insira a temperatura em Celsius: ") ;
    scanf("%f", &TempCelsius);

    TempFahr = (9 * TempCelsius + 160) / 5 ; 

    printf("Sua temperatura em Fahrenheit: %.2f F", TempFahr);




    return 0 ;
}