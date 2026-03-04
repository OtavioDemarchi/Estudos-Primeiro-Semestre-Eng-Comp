#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

/* 13 - A funcionária Ana tirou férias da empresa e está procurando por hotéis e preços de diárias na praia. No
hotel que ela mais gostou a diária varia nas seguintes condições:
vi. Se Ana ficar 3 dias, a diária será de R$ 80,00 reais;
vii. Se Ana ficar 5 dias, a diária será de R$ 100,00 reais;
viii. Se Ana ficar 10 dias, a diária será de R$ 150,00 reais;
Faça um programa que mostre todas as condições para a Ana e qual valor que ela irá pagar em cada
situação. */

float preco1 = 80;
float preco2 = 100;
float preco3 = 150;
float resultado = 0;

int dias1 = 3;
int dias2 = 5;
int dias3 = 10;
int usrinput = 0;
int usrinput2 = 0;

menu_inicial:
printf("Qual das ofertas voce gostaria?\n1 - %d dias por R$ %.2f reais\n2 - %d dias por R$ %.2f reais\n3 - %d dias por R$ %.2f reais\n", dias1, preco1, dias2, preco2, dias3, preco3);
scanf("%d", &usrinput);

    if(usrinput == 1) {

        menu1:

        resultado = preco1 * dias1;
        
        printf("\nPerfeito! O total seria R$ %.2f reais, para continuar aperte 1, para voltar aperte 0\n", resultado);
        scanf("%d", &usrinput2);
        

        if(usrinput2 == 0){
            goto menu_inicial; //descobri esse goto enquanto fazia essa questao, ele é muito util e simples de usar! Voce nomeia certa parte do seu codigo com "qualquer nome: " e ele fica marcado, caso voce queira que seja possivel voltar la, é só colocar goto (Ir até) e o nome que voce deu pra aquela parte, molezinha! :3  
        }

        else if(usrinput2 == 1){

            printf("Seu pedido de %.2f foi processado!", resultado);

        }

            else {

                printf("Insira um comando valido! Repetindo mensagem anterior:\n");
                goto menu1;

            }

    }

    else if(usrinput == 2) {

        menu2:

        resultado = preco2 * dias2;

        printf("\nPerfeito! O total seria R$ %.2f reais, para continuar aperte 1, para voltar aperte 0\n", resultado);
        scanf("%d", &usrinput2);
        
        if(usrinput2 == 0){
            goto menu_inicial;
        }

        else if(usrinput2 == 1){

            printf("Seu pedido de %.2f foi processado!", resultado);

        }

            else {

                printf("Insira um comando valido! Repetindo mensagem anterior:\n");
                goto menu2;

            }

    }

    else if(usrinput == 3) {

        menu3:

        resultado = preco3 * dias3;

        printf("\nPerfeito! O total seria R$ %.2f reais, para continuar aperte 1, para voltar aperte 0\n", resultado);
        scanf("%d", &usrinput2);
        

        if(usrinput2 == 0){
            goto menu_inicial;
        }

        else if(usrinput2 == 1){

            printf("Seu pedido de %.2f foi processado!", resultado);

        }

            else {

                printf("Insira um comando valido! Repetindo mensagem anterior:\n");
                goto menu3;
            }

    }
        else {

            printf("Insira um comando valido! Repetindo mensagem anterior:\n");
                goto menu_inicial; 
        }

    return 0;

}