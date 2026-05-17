#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

//11 - Em uma sala de aula, a professora pede aos alunos para realizar as 4 operações matemáticas (Soma, Elevar os dois números ao quadrado, Multiplicação e Divisão) com 2 números reais. Faça um programa com um menu destas 4 operações em que o aluno escolha qual operação quer fazer e para ajudar estes alunos, mostre o resultado final da operação escolhida.

    int num1, num2 = 0;
    int operacao = 0;
    int resultado1, resultado2 = 0;
    float div1, div2, resdiv = 0.0f;
    

    printf("Insira dois numeros: ");
    scanf("%d %d", &num1, &num2);

    printf("\nQual operacao voce gostaria de fazer?\n\n1 - Soma\n2 - Elevar os dois ao quadrado\n3 - Multiplicacao\n4 - Divisao\n\n");
    scanf("%d", &operacao);

    if(operacao == 1){

        resultado1 = num1 + num2;

        printf("\nA soma dos dois numeros eh %d\n", resultado1);

    }

    else if(operacao == 2){

        resultado1 = pow(num1, 2);
        resultado2 = pow(num2, 2);

        printf("\nO primeiro numero ao quadrado eh %d\nO segundo numero ao quadrado eh %d\n", resultado1, resultado2);

    }

    else if(operacao == 3){

        resultado1 = num1 * num2;
    
        printf("\nA multiplicacao dos dois numeros eh %d", resultado1);

    }

    else if(operacao == 4){

        div1 = num1;
        div2 = num2;
        resdiv = div1 / div2;
    
        printf("\nA divisao dos dois numeros eh %.2f", resdiv);

    }


    return 0;

}