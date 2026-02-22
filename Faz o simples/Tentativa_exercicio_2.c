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
int NumZ3 = 0;

printf("Insira numero X:") ;
scanf("%d", &NumX);

printf("Insira numero Y:");
scanf("%d", &NumY);

NumZ0 = NumX + NumY ;
NumZ1 = NumX - NumY ; 
NumZ2 = NumX * NumY ; 
NumZ3 = NumX / NumY ;

printf("Adicao:  %d\n", NumZ0);
printf("Subtracao: %d\n", NumZ1);
printf("Multiplicao: %d\n", NumZ2);
printf("Divisao: %d\n", NumZ3);


return 0 ;


}

