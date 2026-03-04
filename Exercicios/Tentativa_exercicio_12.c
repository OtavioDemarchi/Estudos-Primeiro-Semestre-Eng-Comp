#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

/* 12 - A professora da escola está com dificuldade de fechar a média dos alunos a tempo do fechamento do
semestre e precisa de ajuda. Para ajudá-la, você precisa fazer um programa que execute as seguintes
instruções:
i. Ler e mostrar nome;
ii. Peça para digitar 2 notas;
iii. Calcule a média do aluno;
iv. Mostrar a média;
v. Com a média calculada, mostre a mensagem da situação do aluno em relação às seguintes
condições:
Média inferior a 5,0 – “Reprovado”
Média de 5,1 a 6,9 – “Recuperação”
Média de 7,0 a 10 – “Aprovado”*/

float Nota1, Nota2, Media = 0.0f;
char Aluno[15] = "";

printf("Insira o nome do aluno: ");
scanf("%s", &Aluno);

printf("Insira as duas notas do %s: ", Aluno);
scanf("%f %f", &Nota1, &Nota2);

Media = (Nota1 + Nota2) / 2;

    if(Media < 5){
        printf("A media eh %.2f. O aluno %s esta reprovado", Media, Aluno);
    }

    else if(Media < 7){
        printf("A media eh %.2f. O aluno %s esta de recuperacao", Media, Aluno);
    }

    else{
        printf("A media eh %.2f. O aluno %s esta aprovado", Media, Aluno);

    }   


    return 0;

}