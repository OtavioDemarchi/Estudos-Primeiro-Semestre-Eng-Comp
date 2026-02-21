#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
    float teste = 3;
    float preco = 19.99;
    float temperatura = -10.1;

    printf("Sua média é %.2f\n", media);

        /*Pra chamar o float é %f, se colocar .X (X sendo
        um numero, você limita o numero de decimais, exemplo:
        float = 3, %.3f = 3.000, sacou?)*/

    
    printf("%.3f\n", teste);

    printf("O preço é R$%.2f\n", preco);

    printf("A temperatura é %.1f°C\n", temperatura);

    double pi = 3.14159265358979323846;

    // quando precisão é importante, é recomendado usar o tipo double, que tem mais casas decimais do que o float

    printf("O valor de pi é %.15lf\n", pi); //é bom usar lf para double, para garantir a precisão, mesmo que o printf aceite %f para ambos, é uma boa prática usar o especificador correto, já que ao usar scanf, por exemplo, é necessário usar %lf para ler um double, então é bom manter a consistência e usar %lf para double em printf também

    char nota = 'A'; //padrão americano sabe
    char simbolo = '*';
    char moeda = '$';


    printf("Sua nota é %c\n", nota);
    printf("O simbolo é %c\n", simbolo); //%c apenas para uma unica letra ou simbolo
    printf("A moeda é %c\n", moeda);

    char nome[] = "João";
    char comida[] = "Bolo";
    char email[] = "teste123@gmail.com";
    
    /*para fazer uma frase, uma string, você especifica o nome da variavel e taca um colchete na frente, depois coloca o texto entre aspas e fecha o colchete, exemplo: char nome[] = "João";
    pode colocar oq quiser nas aspas que fica de boa */
     

    printf("Seu nome é %s\n", nome);
    printf("Sua comida favorita é %s\n", comida);
    printf("Seu email é %s\n", email);

    bool IsOnline = true;

    printf("O usuário está online? %s\n", IsOnline ? "Sim" : "Não"); 

    // a interrogação é o operador ternário, ele funciona como um if, se a condição for verdadeira, ele retorna o primeiro valor (Sim), se for falsa, retorna o segundo valor (Não)

    //outro jeito de usar o bool seria com if mesmo, vou dar uma palinha embaixo para mostrar como seria:

    bool HasAura = false; //isso troca o valor da variável, se for true, o personagem tem aura, se for false, não tem aura

        if(HasAura){
            printf("O personagem tem aura\n");
        } else {
            printf("O personagem não tem aura, precisa farmar mais\n");
        }


        //tentativa de fazer sem ver o amiguinho

        int RAM = 16;

        printf("A quantidade de RAM é %dGB\n", RAM);

        float CPU = 3.5;

        printf("A velocidade do CPU é %.1fGHz\n", CPU);

        double fibonnaci = 1.61803398875;

        printf("O valor de fibonnaci é %.11lf\n", fibonnaci);

        char sistemaOperacional[] = "Windows";

        printf("O sistema operacional é %s\n", sistemaOperacional);

        bool IsLinux = false;

        printf("O sistema é Linux? %s\n", IsLinux ? "Sim" : "Não");

        bool HasSSD = true;
            if(HasSSD){
                printf("O computador tem SSD\n");
            } else {
                printf("O computador não tem SSD, precisa trocar esse HD\n");
            }


        return 0;

}