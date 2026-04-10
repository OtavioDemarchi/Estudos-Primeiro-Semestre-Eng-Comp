#include <stdio.h>

int main(){

/*10. Construir um programa em C para pedir ao usuário qual é a tabuada que ele queira que seja calculada,
após isto fazer e demonstrar os cálculos.*/

int numero = 0;
int i = 0;
int x = 0;

printf("Qual tabuada voce deseja?\n");
scanf("%d", &numero);


printf("xXTabuada do %d!Xx\n", numero);
for(i; i<=numero * 9;i+=numero){


    x = (i + numero) / numero; //eu amo nao usar IA e ter o prazer de criar um solucao na minha propria cabeca
    printf("%d * %d = %d\n", numero, x, i + numero);

}

    return 0;
}