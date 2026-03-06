#include <stdio.h>

int main(){

/*13. Fazer um programa que faça a soma de 10 números;*/

int somaquant = 0;
int i = 0;
int n, soma = 0;


printf("insira quantos quantos numeros voce gostaria de somar:\n");
scanf("%d", &somaquant);


for(i = 0; i < somaquant; i++){
printf("insira o %do numero:\n", i+1);
scanf("%d", &n);
soma += n;
}

printf("\nO resultado eh: %d", soma);

    return 0;
}