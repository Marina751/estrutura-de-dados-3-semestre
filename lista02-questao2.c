/*Elabore um registro que contenha os seguintes campos: nome e nota. O campo nota
deverá ser um vetor com 03 notas para registrar as notas AP1, AP2 e FINAL.*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
    struct alunos_ED
    {
        char nome[35];
        float notas[3];
    };
    struct alunos_ED alunos[35];
    
    printf("\n\n\n---------- REGISTRO DE ALUNOS ----------\n\n\n");
    for (int i=0, j=1; i<35, j<36; i++, j++){
        printf("Nome do aluno %d: ", j);
        fflush(stdin);
        fgets(alunos[i].nome, 35, stdin);
        printf("Nota AP1 do aluno %d: ", j);
        scanf(" %f", &alunos[i].notas[0]);
        printf("Nota AP2 do aluno %d: ", j);
        scanf(" %f", &alunos[i].notas[1]);
        printf("Nota FINAL do aluno %d: ", j);
        scanf(" %f", &alunos[i].notas[2]);
        printf("\n");
    }
    printf("----- DADOS DOS ALUNOS DE ESTRUTURAS DE DADOS -----\n\n\n");
    for(int i=0, j=1; i<35, j<36; i++, j++){
        printf("Nome do aluno %d:  %s",j, alunos[i].nome);
        printf("\nNota AP1 do aluno %d: %.2f", j, alunos[i].notas[0]);
        printf("\nNota AP2 do aluno %d: %.2f", j, alunos[i].notas[1]);
        printf("\nNota FINAL do aluno %d: %.2f \n\n", j, alunos[i].notas[2]);
    }
  system("pause");
  return(0);
}