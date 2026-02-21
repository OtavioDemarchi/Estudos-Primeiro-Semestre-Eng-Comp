#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){

int Idade = 0;
float Media = 0.0f;
char Nota = '\0'; 
char Nome[30] = ""; //30 é o tamanho maximo que o "Nome" pode ter. em caracteres (ou bytes).

//é colocado 0 (valor nulo) pra evitar comportamento errado dos valores das variaveis, caso nada fosse colocado e o codigo fosse executado, outros valores apareceriam "aleatoriamente" por estarem armazenados por outro programa ou algo do tipo.


printf("Insira sua idade: ");
scanf("%d", &Idade); //& especifica o endereço pra qual o input do usuário vai ser definido, tipo, "oq o usuario colocar aqui vai ser pra (nesse caso) Idade"

printf("Insira sua media: ");
scanf("%f", &Media);

printf("Insira sua nota: ");
scanf(" %c", &Nota); //IMPORTANTE, aqui é coloca um espaço antes do "%c" pq o \n sobra ao pegar o valor da "Media", fazendo com que o \n seja designado a "Nota", já que sobrou, o espaço faz com que haja um  clear no \n ou seja la oq sobrou antes, sacou?

printf("Insira seu nome completo: "); 
// scanf("%s", &Nome); //nesse caso o scanf lê somente o primeiro nome, pois não lê após o espaço, para contornar isso, usamos "fgets"(File Get String).


getchar(); //lembra do macete que de colocar um espaço atras pra dar clear no que sobrou? Então no fgets não da pra fazer isso, por isso usamos o getchar() antes, pra dar clear nessa bobonica >:3

fgets(Nome, sizeof(Nome), stdin); //Fgets é um tiquinho mais complicado. Primeiro especifica a variavel, depois o tamanho maximo do input (tem que ser o mesmo especificado lá em cima, porém usamos sizeof() e evitamos dor de cabeça :3) e então stdin (Standard Input).


Nome[strlen(Nome) - 1] =  '\0'; //isso é pra dar clear na string, mesmo problema que a gente ja aprendeu a resolver de DUAS maneiras diferentes bléh, dessa vez a gente importou o querido <string.h> que tem a função strlen(), ele retorna o tamanho da função, taca um -1 pra tirar o \n que sobrou e o = '\0' é pra tacar algo nulo na frente e ficar de boa, sacou? espero que sim :'3


printf("%s\n", Nome);
printf("%d\n", Idade);
printf("%.2f\n", Media);
printf("%c\n", Nota);


return 0;

}