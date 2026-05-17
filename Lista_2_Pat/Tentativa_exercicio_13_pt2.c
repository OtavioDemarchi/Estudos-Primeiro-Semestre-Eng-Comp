#include <stdio.h>

int main(){

/*13. Fazer um programa que faça a soma de 10 números;*/

//aqui eu compliquei pq amo complicar haha, dei a opção de escolher quantas numeros o usuario gostaria de somar, le o codigo, entende, e faz do jeito certo, se eu consigo você consegue

//fazia tempo que eu não revia meus codigos em c e tive que ficar reanalisando pra reentender como funcionava meu proprio codigo, for faz todo sentido depois que voce entende o conceito, recomendo olhar as anotações do exercicio 11 pt 2, não tenha vergonha de pesquisar conceitos ou como certas coisas funcionam, até seniors fazem isso e tá tudo bem

int somaquant = 0;
int i = 0;
int n, soma = 0;


printf("insira quantos quantos numeros voce gostaria de somar:\n");
scanf("%d", &somaquant);


for(i = 0; i < somaquant; i++){
printf("insira o %do numero:\n", i+1);
scanf("%d", &n);
soma += n;
}

printf("\nO resultado eh: %d", soma);

return 0;
}