#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float cube(float num){

    return num * num * num;
}

float square(float num){

    return num * num;

}


bool ageCheck(int age){

    if(age >= 18){
        return 1;
    }

    else{
        return 0;
    }

}

int main(){


    float x = square(2);
    float y = square(3);
    float z = square(4);

    float a = cube(2);
    float b = cube(3);
    float c = cube(4);

    int age = 0;

    printf("%.3f\n", x);
    printf("%.3f\n", y);
    printf("%.3f\n", z);

    printf("%.3f\n", a);
    printf("%.3f\n", b);
    printf("%.3f\n", c);


    printf("whats your age\n");
    scanf("%d", &age);

    if(ageCheck(age)){

        printf("ce pode entrar");

    }

    else{
        printf("faz favor fia");
    }
    









    return 0;


}