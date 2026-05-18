#include <stdio.h>
#include <stdlib.h>

int main(){


//10. Faça um programa para colocar um vetor de 10 posições em ordem crescente;

int numeros[10];
int i = 0;
int j = 0;
int temp = 0;

printf("Insira 10 numeros!");

for(i = 0; i < 10 ; i++){
scanf("%d", &numeros[i]);
}

for(j = 0; j < 9 ; j++) //EU FIZ BUBBLE SORT SEM QUERER NA LISTA 1 UASHDSADHLUSAHD, agora aprendi oq é, j < 9 pq analisa em pares
{
for(i = 0; i < 9 - j; i++){
    if(numeros[i] > numeros[i+1]){
        temp = numeros[i];
        numeros[i] = numeros[i+1];
        numeros[i+1] = temp;
    }
}

}
    for(i = 0; i < 10 ; i++){
        printf("%d\n", numeros[i]);
    }
    return 0;
}