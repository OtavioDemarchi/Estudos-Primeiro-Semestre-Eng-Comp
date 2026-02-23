#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//1 – Construir um programa em C para ler a idade de 2 pessoas e descobrir qual é a maior e qual é a menor idade;


int main() {

    char Nome[20] = "" ;
    int Idade = 0 ;

    char Nome2[20] = "" ;
    int Idade2 = 0 ;


    printf("xXQUAL A MAIOR IDADE?Xx\nInsira o nome X:"); 
    scanf("%19s", Nome); //ao colocar [20] no char e &Nome, ele chama as 20 caracteres, facilitando pra sobrar algo e dar merda depois, o 19 no %19s limita o numero de caracteres que sao lidos, nao colocamos & no Nome porque tecnicamente estaria errado segundo o compilador entao somente obedecemos :'3 

    printf("Insira idade X:");
    scanf("%d", &Idade);

    printf("Insira nome Y:");
    scanf("%19s", Nome2);

    printf("Insira idade Y:");
    scanf("%d", &Idade2);

    if(Idade > Idade2) { 
    printf("%s tem a maior idade, %d, ", Nome, Idade) ;
    printf("%s tem a menor idade, %d.\n", Nome2, Idade2) ;
    }    else if (Idade < Idade2)
    {
        printf("%s tem a maior idade, %d, ", Nome2, Idade2);
        printf("%s tem a menor idade, %d.\n", Nome, Idade);
    }
        else

        {
            printf("%s tem a mesma idade que %s (%d).\n", Nome, Nome2, Idade);
        }
        
        




    return 0;
}