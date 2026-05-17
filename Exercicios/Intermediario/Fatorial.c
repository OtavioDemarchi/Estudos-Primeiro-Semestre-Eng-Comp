#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Fatorial. Crie uma função fatorial que recebe um inteiro n e retorna n!.

//n! = n * (n - 1)
//10! = 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1

//recebe o n e faz o fatorial

int main(){ 

    int n1 = 0;
    int fatorial = 0;
    int i = 0;
    

    printf("Insira um numero para retornar n!\n");
    scanf("%d", &n1);

    printf("%d", n1);

    fatorial = n1;
    for(i+=n1-1; i > 0; i--){

        printf(" * %d", i);
        
        fatorial += fatorial * i;
    }

    printf("\nou\n");

    printf("%d", fatorial);



    return 0;
}