#include <stdio.h>
#include <stdlib.h>

int main(){

    //7. Faça um programa para somar dois vetores;

    int v1[5];
    int v2[5];
    int v3[5];
    int i = 0;
    int j = 0;

    printf("Insira 5 numeros, e depois mais 5 para que sejam somados:\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &v1[i]);
    }

    for(i = 0; i < 5; i++){
        scanf("%d", &v2[i]);
    }
    
    for(i = 0; i < 5; i++){
        v3[i] = v1[i] + v2[i];
    }

    for(i = 0; i < 5; i++){
        printf("%d\n", v3[i]);
    }

    return 0;
}