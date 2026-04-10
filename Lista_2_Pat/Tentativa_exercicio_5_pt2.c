
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

/*5. Faça um programa utilizando switchs (2 switchs) aninhados para usar 8 operações matemáticas:
• Adição;
• Subtração;
• Multiplicação;
• Divisão;
• Módulo (Resto da divisão);
• Soma dos quadrados dos números;
• Incremento;
• Decremento;
*/

//AVISO! AS OPERAÇÕES DE INCREMENTO E DECREMENTO ERAM MAIS SIMPLES DO QUE EU FIZ, DEVEM APENAS ACRESCENTAR UM OU DIMINUIR UM NO VALOR INSERIDO, SEGUNDO A PATRICIA. EU COMPLIQUEI E DEI A OPÇÃO DO USUARIO ESCOLHER, EU GOSTEI ASSIM E A "IDEIA" FOI APROVADA EM SALA POR ISSO NÃO VOU MUDAR!!

int inputusr, N1mod, N2mod, N1inc, N2inc, N3inc = 0;

float N1, N2, Resultado = 0.0f;

menu_inicial:

printf("Qual tipo de operacao voce gostaria de fazer?\n 1 - Operacao Simples\n 2 - Operacao Complexa\n");
scanf("%d", &inputusr);

switch(inputusr){

    case 1:
    printf("Qual operacao voce gostaria de fazer?\n 1 - Adicao\n 2 - Subtracao\n 3 - Multiplicacao\n 4 - Divisao\n");
    scanf("%d", &inputusr);

        switch (inputusr){

        case 1:
        printf("Insira os dois numeros que gostaria de somar:\n");
        scanf("%f%f", &N1, &N2);

        Resultado = N1+N2;

        printf("\nO resultado eh: %.2f\n", Resultado);
        break;

        case 2:
        printf("Insira os dois numeros que gostaria de subtrair:\n");
        scanf("%f%f", &N1, &N2);

        Resultado = N1-N2;

        printf("\nO resultado eh: %.2f\n", Resultado);
        break;

        case 3:
        printf("Insira os dois numeros que gostaria de multiplicar:\n");
        scanf("%f%f", &N1, &N2);

        Resultado = N1*N2;

        printf("\nO resultado eh: %.2f\n", Resultado);
        break;

        case 4:
        printf("Insira os dois numeros que gostaria de fazer a operacao de divisao:\n");
        scanf("%f%f", &N1, &N2);

        if(N2 == 0){
            printf("Voce nao pode dividir por 0!\n");
            goto menu_inicial;
        }
        Resultado = N1/N2;

        printf("\nO resultado eh: %.2f\n", Resultado);
        break;

        default:
        printf("Insira um comando valido!\n");
        goto menu_inicial;
        break;
    }
break;


    case 2:
    printf("Qual operacao voce gostaria de fazer?\n 1 - Modulo\n 2 - Soma dos quadrados dos numeros\n 3 - Incremento\n 4 - Decremento\n");
    scanf("%d", &inputusr);

    switch(inputusr){

        case 1:
        printf("Insira os dois numeros que gostaria de extrair o modulo:\n");
        scanf("%d%d", &N1mod, &N2mod);

        Resultado = N1mod%N2mod;

        printf("\nO resultado eh: %.0f\n", Resultado);
        break;

        case 2:
        printf("Insira os dois numeros na qual gostaria de fazer a soma dos quadrados:\n");
        scanf("%f%f", &N1, &N2);

        N1 = pow(N1, 2);
        N2 = pow(N2, 2);

        Resultado = N1 + N2;

        printf("\nO resultado eh: %.2f\n", Resultado);
        break;

        case 3:
        printf("Insira os dois numeros que gostaria de incrementar:\n");
        scanf("%d%d", &N1inc, &N2inc);

        N3inc = N1inc + N2inc;

        printf("\n");

        for(N1inc; N1inc <= N3inc; N1inc++)
        {

        printf("%d\n", N1inc);

        }
        break;

        case 4:
        printf("Insira os dois numeros que gostaria de decerementar:\n");
        scanf("%d%d", &N1inc, &N2inc);

        N3inc = N1inc - N2inc;

        printf("\n");

        for(N1inc; N1inc >= N3inc; N1inc--)
        {

        printf("%d\n", N1inc);

        }
        break;

        default:
        printf("Insira um comando valido!\n");
        goto menu_inicial;
        break;
    }
break;

    default:
    printf("Insira um comando valido!\n");
    goto menu_inicial;
    break;

}

return 0;
}