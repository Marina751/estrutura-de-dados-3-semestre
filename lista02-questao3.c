/*Considerando o registro da questão anterior, elabore um programa para armazenar o
nome e nota de 35 alunos da disciplina Estruturas de Dados. O programa deverá
mostrar os registros dos 35 alunos e notas.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    struct alunos_ED
    {
        char nome[35];
        float nota;
    };
    struct alunos_ED alunos[35];
    
    printf("\n\n\n---------- REGISTRO DE ALUNOS ----------\n\n");
    for (int i=0, j=1; i<35, j<36; i++, j++){
        printf("Nome do aluno %d: ", j);
        fflush(stdin);
        fgets(alunos[i].nome, 35, stdin);
        printf("Nota do aluno %d: ", j);
        scanf(" %f", &alunos[i].nota);
        printf("\n");
    }
    printf("---------- DADOS DOS ALUNOS REGISTRADOS EM ESTRUTURAS DE DADOS ----------\n\n");
    for(int i=0, j=1; i<35, j<36; i++, j++){
        printf("Nome do aluno %d:  %s",j, alunos[i].nome);
        printf("Nota do aluno %d: %.2f\n\n", j, alunos[i].nota);
    }
  system("pause");
  return(0);
}