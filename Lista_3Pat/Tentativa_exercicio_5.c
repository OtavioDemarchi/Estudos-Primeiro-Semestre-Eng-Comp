#include <stdio.h>
#include <stdlib.h>

int main(){

    //Faça um programa que leia um número N entre 2 e 10, inclusive, e construa a sua tabuada. Tal programa só deverá ser encerrado quando o usuário digitar 0 para o número N

int numero = 10; //alocar um valor só pra evitar comportamento estranho (sujeira como a Pat)
int i = 0;

while(numero!=0){

    printf("Insira um numero entre 2 e 10, para sair aperte 0\n");
    scanf("%d", &numero);

    if(numero!=0){

    for(i = 0; i < 10; i++){

        printf("%d * %d = %d\n", numero, i+1, numero * (i+1));
    
    }
    }
}   

    return 0;
}