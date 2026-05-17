#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int x = 9;
    float y = 3.14;
    int z = -3;
    

 //   x = sqrt(x); 
 //raiz quadrada, (square root), tem que incluir <math.h>

 // x = log(x); //logaritmo

 // x = sin(x) //seno (radiano)

 // x = cos(x) //cosseno (radiano)

 // x = tan(x) //tangente (radiano)

    x = pow(x, 2); //elevado a 2, ou qualquer numero que colocar (x to the power of two)

    y = round(y); //arredonda

 //   y = ceil(y); //arredonda PRA CIMA 

 //   y = floor(y); //arredonda PRA BAIXO

    z = abs(z); //da o valor absoluto, fazendo -3 ser 3 por exemplo
    
    printf("%d\n", x);
    printf("%f\n", y);
    printf("%d\n", z);




    return 0 ;
}