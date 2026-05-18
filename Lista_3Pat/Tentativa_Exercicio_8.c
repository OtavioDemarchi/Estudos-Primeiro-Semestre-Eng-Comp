#include <stdio.h>
#include <stdlib.h>

int main(){

    //8. Faça um programa para inserir valores até o usuário digitar 0 utilizando o comando while e depois somar os valores digitados;

int numero = 10;
int i = 0;
int soma = 0;

while(numero!=0){

    printf("Insira numeros para serem somados ao encerrar o while\n");
    scanf("%d", &numero);

    if(numero!=0){
        soma += numero;
    }
}
    printf("valor da soma: %d", soma);

    return 0;
} 