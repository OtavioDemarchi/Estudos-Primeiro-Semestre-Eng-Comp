#include <stdio.h>
#include <string.h>


void happyBirthday(char name[], int age){

printf("Happy birthday to you!\n");
printf("Happy birthday to you!\n");
printf("Happy birthday dear %s\n", name);
printf("Happy birthday to you!\n");
printf("You are %d years old!\n", age);

}

int main(){

char name[20] = "";
int age = 0;

printf("whats your name?\n");
fgets(name, sizeof(name), stdin);
name[strlen(name) -1] = '\0';

printf("Whats your age?\n");
scanf("%d", &age);

happyBirthday(name, age);

    return 0;
}