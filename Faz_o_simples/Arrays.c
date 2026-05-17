#include <stdio.h>
#include <stdlib.h>

int main(){


    int numbers[] = {10, 20, 30, 40, 50};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    char names[] = "biribinha da silva";

    int sizeNumbers = sizeof(numbers) / sizeof(numbers[0]);
    int sizeGrades = sizeof(grades) / sizeof(grades[0]);
    int sizeNames = sizeof(names) / sizeof(names[0]);


    printf("%d", numbers[3]);
    printf("%c\n", grades[2]);

    for(int i = 0; i < sizeNames; i++){

        printf("%c ", names[i]);

    }













    return 0;
}