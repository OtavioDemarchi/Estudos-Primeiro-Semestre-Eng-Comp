#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

int num = 2457 ;
    if(num % 2 == 0) { /*o % não é literalmente porcentagem, mas sim o operador de módulo, que retorna o    
                        resto da divisão entre dois números. */
   
        printf("%d is even", num) ;
    } else {
        printf("%d is odd", num) ;
    }


    return 0;

}