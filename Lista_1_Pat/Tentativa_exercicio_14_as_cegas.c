#include <stdio.h>
#include <stdlib.h>
int main () {
int idade;
printf("Digite a sua idade\n");
scanf("%d", &idade);
if(idade <= 12) {
printf("Voce tem %d e eh uma crianca\n", idade);}
else if (idade <= 19) {
printf("Voce tem %d e eh um adolescente\n", idade);}
else if (idade <= 60) //por algum motivo eu coloquei um ; aqui fazendo com que o else ficasse sem esse if, melhore Tatah
{
printf("Voce tem %d e eh um adulto\n", idade);}
else 
printf("Voce tem %d e em um idoso \n", idade);
return 0;
}