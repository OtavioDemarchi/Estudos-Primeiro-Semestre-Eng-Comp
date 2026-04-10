
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

/*2. Faça um programa para mostrar um menu de 4 opções de sobremesas a sua escolha utilizando um switch
e um default mostrando que não existe essa opção de escolha.*/

int inputusr = 0;

menu_inicial:
printf("Qual sobremesa voce gostaria?\n 1 - Pudim\n 2 - Sorvete\n 3 - Pave\n 4 - Gelatina\n");
scanf("%d", &inputusr);

switch (inputusr)
{
    case 1:
    printf("Voce escolheu pudim!");
    break;
    
    case 2:
    printf("Voce escolheu sorvete!");
    break;

    case 3:
    printf("Voce escolheu pave!");
    break;

    case 4:
    printf("Voce escolheu gelatina!");
    break;

    default:
    printf("Escolha invalida, repetindo mensagem anterior!\n");
    goto menu_inicial;
    break;
}

    return 0;
}