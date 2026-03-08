#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//2 - Faça um algoritmo que receba dois números e ao final mostre a soma, subtração, multiplicação e a divisão dos números lidos;

int main(){ 

int NumX = 0;
int NumY = 0;
int NumZ0 = 0;
int NumZ1 = 0;
int NumZ2 = 0;
float NumXf = 0.0f;
float NumYf = 0.0f;
float NumZ3 = 0.0f;

printf("INSIRA DOIS NUMEROS E TENHA A SOMA, SUBTRACAO, MULTIPLICACAO DOS MESMOS\nInsira numero X:") ;
scanf("%d", &NumX);

printf("Insira numero Y:");
scanf("%d", &NumY);

NumXf = NumX ;
NumYf = NumY ;
NumZ0 = NumX + NumY ;
NumZ1 = NumX - NumY ; 
NumZ2 = NumX * NumY ; 
NumZ3 = NumXf / NumYf ;

printf("Adicao:  %d\n", NumZ0);
printf("Subtracao: %d\n", NumZ1);
printf("Multiplicao: %d\n", NumZ2);
printf("Divisao: %.3f\n", NumZ3);


return 0 ;


}

