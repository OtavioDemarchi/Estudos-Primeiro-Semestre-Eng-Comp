#include <stdio.h>
#include <string.h>


int main() {

    char Item[50] = "";
    float Preco = 0.0f;
    int Quantidade = 0;
    char Moeda[4] = "R$\0"; //por algum motivo estava aparencendo algo random na frente do R$, taquei-lhe um \0 e resolveu 

    float Total = 0.0f;

    printf("Qual item voce gostaria de comprar?: ");
    fgets(Item, sizeof(Item), stdin);
    
    Item[strlen(Item) - 1] = '\0'; //"a gente importou o querido <string.h> que tem a função strlen(), ele retorna o tamanho da função, taca um -1 pra tirar o \n que sobrou e o = '\0' é pra tacar algo nulo na frente e ficar de boa, sacou? espero que sim :'3"


    printf("Qual o preco de cada item?: ");
    scanf("%f", &Preco);

    printf("Quantos itens voce gostaria?: ");
    scanf("%d", &Quantidade);

    Total = Preco * Quantidade;

    printf("Voce comprou %d %s(s)\n", Quantidade, Item); //Item ta sobrando \n, temos que resolver lá quando pede o input do Item

    printf("Seu total: %s%.2f", Moeda, Total) ; //%c ta chamando a moeda, %2.f o Total, simples, só colocamos um atrás do outro.

    return 0;
}
