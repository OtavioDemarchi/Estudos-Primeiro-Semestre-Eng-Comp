#include <stdio.h>

int main(){

    /* 8. Fazer uma soma de 3 números utilizando o for. */


    int n, soma = 0;
    int quantidade = 3;
    
    printf("Digite %d numeros para somar:\n", quantidade);
    
    for(int i = 0; i < quantidade; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &n);
        soma += n;  
    }
    
    printf("Soma dos %d numeros: %d\n", quantidade, soma);

return 0;
}