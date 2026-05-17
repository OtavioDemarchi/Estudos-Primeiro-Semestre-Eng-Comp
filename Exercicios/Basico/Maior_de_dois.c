#include <stdio.h>
#include <stdlib.h>

//Maior de dois. Crie uma função maior que recebe dois inteiros e retorna o maior.

int main(){

int n1 = 0;
int n2 = 0;

printf("Insira dois numeros\n");
scanf("%d%d", &n1,&n2);


if(n2 < n1){

    printf("O maior numero eh %d", n1);

}

else if (n1 < n2){

    printf("O maior numero eh %d", n2);

}

else{
    printf("Os numeros sao iguais, %d = %d", n1, n2);
}

    return 0;
}