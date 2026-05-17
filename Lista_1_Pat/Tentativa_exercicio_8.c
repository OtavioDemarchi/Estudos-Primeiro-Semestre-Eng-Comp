
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

/*8 - Construa um algoritmo que digite 3 números, e faça a sequência do menor para o maior número; */


int N1, N2, N3 = 0;

printf("xX MENOR PARA O MAIOR Xx \nInsira 3 numeros: \n");
scanf("%d%d%d", &N1, &N2, &N3);


    if(N1 > N2 ){

    N1 = N1 + N2; // x= x + y 
    N2 = N1 - N2; // y= x - y
    N1 = N1 - N2; // x= x - y
    }

    if(N2 > N3){

    N2 = N2 + N3;
    N3 = N2 - N3;
    N2 = N2 - N3;
    }

    if(N2 < N1){

    N2 = N2 + N1;
    N1 = N2 - N1;
    N2 = N2 - N1;
    }

printf("%d, %d, %d", N1, N2, N3);


    return 0;
}