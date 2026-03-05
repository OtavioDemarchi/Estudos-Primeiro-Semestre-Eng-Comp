
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

/*4. Faça um programa que escolha uma das opções de cardápio a sua escolha, por exemplo, o cardápio de
uma churrascaria.*/

int inputusr = 0;

menu_carnes:
printf("Escolha um dos itens do nosso cardapio!\n 1 - Fraldinha\n 2 - Picanha\n 3 - Cupim\n 4 - Contra File\n 5 - Fraldinha");
scanf("%d", &inputusr);

switch (inputusr)
{
    case 1:
    printf("Voce escolheu fraldinha!");
    break;
    
    case 2:
    printf("Voce escolheu picanha!");
    break;

    case 3:
    printf("Voce escolheu cupim!");
    break;

    case 4:
    printf("Voce escolheu contra file!");
    break;

    default:
    printf("Escolha invalida, repetindo mensagem anterior!\n");
    goto menu_carnes;
    break;
}

    return 0;
}