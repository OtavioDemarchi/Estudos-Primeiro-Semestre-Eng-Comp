
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
• Decremento;*/

int inputusr, N1mod, N2mod, N1inc, N2inc, N3inc = 0;

float N1, N2, Resultado = 0.0f;

menu_inicial:
printf("Qual operacao voce gostaria de fazer?\n 1 - Adicao\n 2 - Subtracao\n 3 - Multiplicacao\n 4 - Divisao\n 5 - Modulo\n 6 - Soma dos quadrados dos numeros\n 7 - Incremento\n 8 - Decremento\n");
scanf("%d", &inputusr);

switch (inputusr)
{
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

    Resultado = N1/N2;

    printf("\nO resultado eh: %.2f\n", Resultado);
    break;

    case 5:
    printf("Insira os dois numeros que gostaria de extrair o modulo:\n");
    scanf("%f%f", &N1mod, &N2mod);

    Resultado = N1mod%N2mod;

    printf("\nO resultado eh: %.2f\n", Resultado);
    break;

    case 6:
    printf("Insira os dois numeros na qual gostaria de fazer a soma dos quadrados:\n");
    scanf("%f%f", &N1, &N2);

    N1 = pow(N1, 2);
    N2 = pow(N2, 2);

    Resultado = N1 + N2;

    printf("\nO resultado eh: %.2f\n", Resultado);
    break;

    case 7:
    printf("Insira os dois numeros que gostaria de incrementar:\n");
    scanf("%d%d", &N1inc, &N2inc);

    N3inc = N1inc + N2inc;

    for(N1inc; N1inc <= N3inc; N1inc++)
    {

    printf("%d\n", N1inc);
    }
    break;

    case 8:
    printf("Insira os dois numeros que gostaria de decerementar:\n");
    scanf("%d%d", &N1inc, &N2inc);

    N3inc = N1inc - N2inc;

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





    return 0;
}
