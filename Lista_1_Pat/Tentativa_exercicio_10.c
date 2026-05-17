#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*10 - Construa um programa para escrever a sua idade, se a sua idade for:
Menor ou Igual a 12 anos, você é uma criança;
Menor ou Igual a 19 anos, você é um adolescente;
Menor ou Igual a 60 anos, você é um adulto;
Maior do que 60 anos, você é um idoso */

int main() {

    int Idade = 0;

    printf("Insira sua idade:");
    scanf("%d", &Idade);

    if(Idade <= 12)
    {
    printf("Voce e uma crianca");
    
    }
    else if (Idade <= 19) {
    
        printf("Voce e um adolescente");
    }
        else if (Idade <= 60)
        {
            printf("Voce e um adulto");
        }
        else
            printf("Voce e um idoso");
    




    return 0;
}