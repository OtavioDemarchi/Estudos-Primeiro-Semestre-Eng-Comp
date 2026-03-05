#include <stdio.h>

int main(){

    /* 6. Criar um switch case dando para o usuário as opções das vogais e mostre uma palavra na tela que forma
com aquela letra. */

char usrinput = '\0';

menu_inicial:
printf("Escolha uma das vogais!\n LETRA MAISUCULA! \n A \n E \n I \n O \n U\n");
scanf("%c", &usrinput);

switch (usrinput)
{

case 'A':
printf("Amarelo");
break;

case 'E':
printf("Estado");
break;

case 'I':
printf("Irmandade");
break;

case 'O':
printf("Oraculo");
break;

case 'U':
printf("Ultimo");
break;

default:
printf("Insira um comando valido!");
goto menu_inicial;
break;
}   



return 0;
}