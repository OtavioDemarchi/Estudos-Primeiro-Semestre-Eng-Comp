#include <stdio.h>

int main(){

    int idade = 25;
    int ano = 2025;
    int quantidade = 1;

    printf("sua idade é %d\n", idade); 
    
        /*%d chama a variavel, após
        escrever a frase, é preciso colocar uma virgula e especificar
        a variavel*/

        /*\n adiciona uma nova linha embaixo, fazendo com que
        o proximo texto não fique na frente*/
    
    printf("o ano é %d\n", ano);

    printf("seu pedido contém %d itens\n", quantidade);

    float media = 2.5;
    printf("Sua média é %.2f\n", media);

        /*Pra chamar o float é %f, se colocar .X (X sendo
        um numero, você limita o numero de decimais, exemplo:
        float = 3, %.3f = 3.000, sacou?)*/

    float teste = 3;
    printf("%.3f", teste);

    


    return 0;

}